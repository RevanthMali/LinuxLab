#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void main()
{
  while(1){
    printf("Hello Linux");
    sleep(5);
  }
}
