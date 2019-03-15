#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <syslog.h>
#include <string.h>
#include <time.h>

int main(){
struct stat st = {0};

if (stat("/home/swan/log", &st) == -1) {
    mkdir("/home/swan/log", 0700);
}

int counter = 0;

  pid_t pid, sid;

  pid = fork();

  if (pid < 0) {
    exit(EXIT_FAILURE);
  }

  if (pid > 0) {
    exit(EXIT_SUCCESS);
  }

  umask(0);

  sid = setsid();

  if (sid < 0) {
    exit(EXIT_FAILURE);
  }

  if ((chdir("/")) < 0) {
    exit(EXIT_FAILURE);
  }

  close(STDIN_FILENO);
  close(STDOUT_FILENO);
  close(STDERR_FILENO);

  while(1) { 
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[26], folder[100], ch;
  time ( &rawtime );
  FILE *file, *file2;
  timeinfo = localtime ( &rawtime );
  strftime(buffer, 26, "%d:%m:%Y-%H:%M:%S", timeinfo);
  sprintf(folder,"/home/swan/log/%s/", buffer);
  mkdir(folder,0700);
  for(int i=1;i<31;i++){
  file = fopen("/var/log/syslog", "r");
char t[10]="", z[100]="";
strcpy(z, folder);
sprintf(t, "log%d.log",i);
  strcat(z, t);
  file2 = fopen(z,"w");
    while ((ch = fgetc(file)) != EOF){
      fputc(ch, file2);}
  fclose(file);
  fclose(file2);
   sleep(60);
  }
  }
  exit(EXIT_SUCCESS);
}
