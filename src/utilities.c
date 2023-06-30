#include "utilities.h"

void print_error() {
    char error_no[5];
    sprintf(error_no, "%d", errno);
    perror(error_no);
}