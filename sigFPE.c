#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void main()
{
  (void) signal(SIGFPE,handler);
  int x,y;
  printf("Enter x:");
  scanf("%d",&x);
  printf("Enter y:");
  scanf("%d",&y);
  int res = x/y;
  printf("%d  / %d is %d\n",x,y,res);
}
void handler(int sig){
  printf("Floating point Error!");
  printf("Received signal:%d",sig);
(void) signal(SIGFPE,SIG_DEL);
exit(0);
}
