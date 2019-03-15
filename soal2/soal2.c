#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <syslog.h>
#include <string.h>
#include <pwd.h>
#include <grp.h>

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

  if ((chdir("/home/absolutlubis/modul2/soal2")) < 0) {
    exit(EXIT_FAILURE);
  }

  close(STDIN_FILENO);
  close(STDOUT_FILENO);
  close(STDERR_FILENO);

  while(1) {
    struct stat path;
    char file[256]="/home/absolutlubis/modul2/soal2/hatiku/elen.ku";
    
    stat(file, &path);

    struct passwd *pw = getpwuid(path.st_uid);
    struct group  *gr = getgrgid(path.st_gid);

    if(((strcmp(pw->pw_name,"www-data"))==0) && ((strcmp(gr->gr_name,"www-data"))==0))
	{
		remove(file);
	}
    sleep(3);
  }
  
  exit(EXIT_SUCCESS);
}
