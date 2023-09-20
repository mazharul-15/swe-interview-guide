/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU

    Program: scanf return int value

*/

#include<stdio.h>

int main() {

    int a, b, scanf_rtn_value;

    scanf_rtn_value = scanf("%d %d", &a, &b);

    printf("%d ", scanf_rtn_value);

    return 0;
}
