#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    
    char *path = argv[1];
    DIR *dir = opendir(path);
    if (dir == NULL) {
        perror("Error opening directory");
        return 1;
    }
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);  
    }
    if (closedir(dir) == -1) {
        perror("Error closing directory");
        return 1;
    }

    return 0;
}

