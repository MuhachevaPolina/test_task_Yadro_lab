#include "utilities.h"

int main() {
    char string[] = "Hello world!";
    int shmemory;
    char keyFile[] = "some_file";
    key_t key;
    char* data_p;
    char error_no[5];

    if ((key = ftok(keyFile, 'P')) < 0) {
        print_error();
        return -1;
    }
    
    if ((shmemory = shmget(key, SIZE_OF_MEMORY, IPC_CREAT | 0666)) < 0) {
        print_error();
        return -1;
    }

    if ((data_p = (char*) shmat(shmemory, NULL, 0)) < 0) {
        print_error();
        return -1;
    }
    sprintf(data_p, "%s", string);
    printf("%d\n", shmemory);
    return 0;
}
