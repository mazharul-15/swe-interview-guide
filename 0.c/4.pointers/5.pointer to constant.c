#include<stdio.h>


int main() {

    double val = 13.123;
    double *p = &val;
    int a = 10, b = 50;
    const int *ptr = &a;

    printf("%d\n", *ptr);

    ptr = &b;
    printf("%d\n", *ptr);

    return 0;
}
