#include<stdio.h>
#include<unistd.h>

int main(){
        char *arg[]={
                "killall","soal5",NULL};
        execv("/usr/bin/killall",arg);
        }



