#include "utilities.h"

int main() {
    int shmemory = -1;
    char* data_p;
    char input_string[LEN_OF_STR];
    bzero(input_string, LEN_OF_STR);
    fgets(input_string, LEN_OF_STR, stdin);
    
    if (!strlen(input_string)) {
        return -1;
    }

    shmemory = atoi(input_string);
    if ((data_p = (char*) shmat(shmemory, NULL, 0)) < 0) {
        print_error();
        return -1;
    }

    printf("%s\n", data_p);

    if(shmdt(data_p) < 0) {
        print_error();
        return -1;
    }

    if (shmctl(shmemory, IPC_RMID, 0) < 0) {
        print_error();
        return -1;
    }
    return 0;
}
