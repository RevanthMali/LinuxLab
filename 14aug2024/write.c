 
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {

    char *dpath = argv[1];
    int fd2 = open(dpath, O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (fd2 == -1) {
        perror("Error opening file");
        return 1;
    }

    ssize_t s = write(fd2, "Linux is Awesome", strlen("Linux is Awesome"));
    if (s == -1) {
      	write(1,"Error",5);
        close(fd2);
        return 1;
    } else {
        printf("File written successfully\n");
    }

    close(fd2);
    return 0;
}

