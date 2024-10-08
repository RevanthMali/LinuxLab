#include<stdio.h>
#include<sys/types.h>
#include<wait.h>
#include<unistd.h>
void main()
{
  pid_t pid ;
  pid = fork();
  if(pid==0){
    printf("child process id:%d",getpid());
    printf("parent process id:%d",getppid());
  }else if(pid>1){
  wait(10);
    printf("parent process id:%d",getpid());
    printf("child process id:%d",pid());
  }else{
    printf("fork failed!");
  }

}
