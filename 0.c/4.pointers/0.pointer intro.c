/*
    Author: Mazharul Islam
            CSE, HSTU.

    Program: Pointer Introduction
*/

#include<stdio.h>


int main() {

    int var;
    int *ptr = &var;
    scanf("%d", &var);
    printf("%d\n", *ptr);

    return 0;
}
