
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[]){
	char *old_file = argv[1];
 //	char *new_file = argv[2];
	int old_fd,new_fd;
	old_fd = open(old_file,O_RDWR);
	printf("old file-descriptor:%d\n",old_fd);
	new_fd = dup(old_fd);
	printf("New file descriptor:%d\n",new_fd);
	return 0;
}
