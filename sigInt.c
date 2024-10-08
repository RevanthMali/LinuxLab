#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void main()
{
  (void) signal(SIGINT,handler);
  sleep(10);
}
void handler(int sig){
  printf("Interrupt signal!");
  printf("Received signal:%d",sig);
}
