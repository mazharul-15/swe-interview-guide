#include<stdio.h>


int main() {

    int a = 10, b = 50;
    const int *ptr = &a;

    printf("%d\n", *ptr);

    ptr = &b;
    printf("%d\n", *ptr);

    return 0;
}
