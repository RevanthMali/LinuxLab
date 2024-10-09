#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(int argc, char *argv[]){
	char *path = argv[1];
	char buffer[100];
	int s;
	int fd  = open(path,O_RDONLY);
	if(fd!=-1){
		printf("File open successfully");
		while(s=read(fd,buffer,100)>0){
			printf("%s\n",buffer);
			printf("No.of bytes read = %d\n",s);
		}
	}else{
		printf("Error in opening file\n");
	}

}
