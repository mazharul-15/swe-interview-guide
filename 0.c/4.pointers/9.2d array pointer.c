#include<stdio.h>


int main() {

    int A[5][5];
    int (*arr)[5];
    arr = A;

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 5; j++) A[i][j] = i+j;
    }

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 5; j++) {
            printf("%d ", *(*(arr+i) + j));
        }
        printf("\n");
    }

    return 0;
}
