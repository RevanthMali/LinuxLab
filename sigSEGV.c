#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void main()
{
  (void) signal(SIGSEGV,handler);
  int x;
printf("enter x:");
scanf("%d",&x);
  sleep(10);
}
void handler(int sig){
  printf("Segmentation Fault!");
 exit(0);
}
