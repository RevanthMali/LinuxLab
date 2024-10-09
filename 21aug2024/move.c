#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main(int argc, char *argv[]) {
    char *spath = argv[1];
    char *dpath = argv[2];
    int fd1, fd2;
    ssize_t s;
    char buffer[100];
    fd1 = open(spath, O_RDONLY);
    if (fd1 == -1) {
        perror("Error opening source file");
        return 1;
    } 
    fd2 = open(dpath, O_WRONLY | O_CREAT, 0664);
    if (fd2 == -1) {
        perror("Error opening destination file");
        close(fd1);
        return 1;
    }
    while ((s = read(fd1, buffer, sizeof(buffer))) > 0) {
        if (write(fd2, buffer, s) != s) {
            perror("Error writing to file");
            close(fd1);
            close(fd2);
            unlink(spath);
            return 1;
        }
    }

    if (s == -1) {
        perror("Error reading from file");
    }
    close(fd1);
    close(fd2);

    return 0;
}
