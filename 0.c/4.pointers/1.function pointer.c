#include<stdio.h>

int func(int a, int b) {

    return a + b;
}


int main() {

    int (*func_ptr)(int, int) = &func;

    printf("%d\n", func_ptr(4, 5));

    return 0;
}
