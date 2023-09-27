#include<stdio.h>


int main() {

    int var = 1987;
    int *ptr = &var;
    int **ptr_ptr = &ptr;

    printf("%d\n", **ptr_ptr);
    return 0;
}
