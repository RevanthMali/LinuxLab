#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include <sys/stat.h>
#include <sys/shm.h>
#define SIZE 1024
void main(){
	 int shmId;
	 char buff[20];
	 void *shmAddr;
	 shmId = shmget((key_t)1234,SIZE,0666);
	 if(shmId == -1){
	 	printf("shared memory creation failed\n");
	 	return;
	 }
	 shmAddr = shmat(shmId,NULL,0);
	 printf("data read from shared memory: %s\n",(char*)shmAddr);
	 shmdt(shmAddr);
	 return;
}
