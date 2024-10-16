#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/stat.h>
void main(){
	char *path = "/tmp/fifo";
	int fd1,fd2;
	char msg1[30],msg2[30];
	mkfifo(path,0666);
	while(1){
		fd2 = open(path,O_RDONLY);
		read(fd2,msg1,sizeof(msg1));
		close(fd2);
		printf("child(recevied):%s\n",msg1);
		printf("child(replying):");
		scanf("%s",msg2);
		fd1 = open(path,O_WRONLY);
		write(fd1,msg2,sizeof(msg2));
		close(fd1);
		if(strcmp(msg2,"exit")==0)
			exit(0);	 
	}
}
