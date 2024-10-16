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
		printf("parent(sending)");
		scanf("%s",msg2);
		fd1 = open(path,O_WRONLY);
		write(fd1,msg2,sizeof(msg2));
		close(fd1);
		fd2 = open(path,O_WRONLY);
		read(fd2,msg1,sizeof(msg1));
		printf("parent(received): %s\n",msg1);
		close(fd2);
		if(strcmp(msg2,"exit")==0)
			exit(0);	 
	}
}
