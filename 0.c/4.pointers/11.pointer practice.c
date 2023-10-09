#include<stdio.h>
#include<stdlib.h>

int main() {

    int val = 100;
    int *ptr = &val;

    printf("%d", *ptr);
    return 0;
}
