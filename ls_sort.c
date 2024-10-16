#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(){
	 
	int fd[2],pid,status;
	status = pipe(fd);
	if(status==-1){
		printf("pipe creation failed\n");
		return;
	}
	pid = fork();
	if(pid==0){
		close(fd[0]);
		close(1);
		dup(fd[1]);
		execlp("ls","ls","-l",(char*)0);
	}else if(pid>0){
		close(fd[1]);
		close(0);
		dup(fd[0]);
		execlp("sort","sort",(char*)0);
	}else{
		printf("fork failed\n");
		return;
	}
}
