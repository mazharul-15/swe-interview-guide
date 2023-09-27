#include<stdio.h>

int main() {

    const char ch = 'A';
    char *const ptr = &ch;
    printf("%c\n", *ptr);

    char ch2 = 'B';
    *ptr = &ch2;
    printf("%c\n", *ptr);

    int var = 10;
    int *ptr2;
    ptr2 = &var;
    printf("%d\n", *ptr2);
    return 0;
}
