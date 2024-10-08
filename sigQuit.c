#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void main()
{
  (void) signal(SIGQUIT,handler);
  sleep(10);
}
void handler(int sig){
  printf("Quit signal!");
  printf("Received signal:%d",sig);
  exit(0);
}
