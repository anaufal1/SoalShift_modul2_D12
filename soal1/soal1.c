#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <syslog.h>
#include <string.h>
#include <dirent.h>
int main() {
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
    // main program here
  char *ptrkestring, *ptrkestring2;
      char namafile[256], fileawal[256], path_awal[256], path_akhir[256] ;
      strcpy(path_awal, "/home/absolutlubis/modul2/soal1/");
      strcpy(path_akhir, "/home/absolutlubis/modul2/soal1/gambar/");
      DIR *dir;
      struct dirent *ent;
      dir = opendir("/home/absolutlubis/modul2/soal1/");
              while((ent = readdir(dir)) != NULL) {
                     strcpy(namafile,ent->d_name);
                     ptrkestring = strstr(namafile,".png");
                     if (ptrkestring != NULL) {
                         printf("%s",ent->d_name);
                         ptrkestring2 = strstr(namafile, "_grey.png");
                         if(ptrkestring2 != NULL)
                             continue;
                         else{       


                           
                             strtok(namafile,".png");
                             strcpy(fileawal,namafile);
                             strcat(fileawal,"_grey.png");
                             strcat(namafile,".png");
                             strcat(path_awal,namafile);
                             strcat(path_akhir,fileawal);
                             rename(path_awal,path_akhir);
                          }
                    } else {
                        continue;
                    }
              }
              closedir(dir);

    sleep(2);
 }
  exit(EXIT_SUCCESS);
}
