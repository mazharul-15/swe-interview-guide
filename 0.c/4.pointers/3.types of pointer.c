#include<stdio.h>

int main() {

    /*int *ptr = NULL;

    printf("%d\n", *ptr);*/

    ///void pointer
    void *ptr;

    int a = 10;
    char ch = 'A';

    ptr = &a;
    printf("%d\n", *(int *)ptr);

    ptr = &ch;
    printf("%c\n", *(char *)ptr);

    return 0;
}
