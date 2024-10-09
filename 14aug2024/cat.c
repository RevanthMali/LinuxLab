#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(int argc, char *argv[]){
	char *path = argv[1];
	int s;
	char *buffer[100];
	write(1,"Enter content",strlen("Enter content"));
	s= read(0,buffer,100);
	int fd  = open(path,O_WRONLY | O_CREAT,0664);
	if(fd!=-1){
		printf("File open successfully\n");
		write(fd,buffer,s);
		printf("File written successfully\n");
		close(fd);
				
	}else{
		write(1,"Error",5);
	}

}
