#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#include<ctype.h>

void func(int b) {

    printf("Value: %d\n", b);
}

int main() {

    char ch = 'A';
    char *ptr = &ch;
    printf("%d\n", &ptr);

    void (*ptr_func)(int) = &func;
    ptr_func(5);

    /// constant pointer = address can't be changed but value changeable
    int a = 200, b = 300;
    int *const cnst_ptr = &a;


    /// pointer to constant = value can't be changed but address can

    const int *ptr_cnst = &b;

    b = 100;
    printf("constant pointer: %d\n pointer-ptr: %d\n", *cnst_ptr, *ptr_cnst);

    /// constant pointer to a constant
    int d = 5000;
    const int *const cnst_ptr_cnst = &d;
    printf("constant pointer to a constant: %d\n", *cnst_ptr_cnst);

    return 0;
}
