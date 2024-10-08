#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void main()
{
  (void) signal(SIGALRM,handler);
  alarm(5);
  sleep(10);
}
void handler(int sig){
  printf("Alarm\n!");
  printf("Received signal:%d",sig);
  exit(0);
}
