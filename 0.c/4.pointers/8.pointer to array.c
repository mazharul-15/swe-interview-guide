#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>


int main() {

    int A[5], *ptr;
    int (*arr)[5];

    /// points whole array to arr;
    arr = &A;
    ptr = A;

    for(int i = 0; i < 5; i++) scanf("%d", &A[i]);

    for(int i =0 ; i < 5; i++) printf("%d\n", *arr[i]);


    return 0;
}
