#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[]){
	char *path = argv[1];
	char buffer[100];
	int fd,s;
	fd = open(path,O_RDONLY);
	s = read(fd,buffer,10);
	if(fd!=-1){ 
		printf("file opened successfully\n");
		write(1,buffer,10);
		close(fd);
	}
	else{
		write(1,"error",5);
	}
	return 0;
}
