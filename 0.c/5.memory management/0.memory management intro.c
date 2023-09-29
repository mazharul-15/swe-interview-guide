#include<stdio.h>
#include<stdlib.h>


int main() {

    /// malloc()
    int *ptr = (int*)malloc(sizeof(int));
    printf("malloc: %d\n", sizeof(ptr));

    /// calloc()
    int *ptr2 = (int*)calloc(1,sizeof(int));
    printf("calloc: %d\n", sizeof(ptr2));

    ptr2 = realloc(ptr2, 5*sizeof(int));

    for(int i = 0; i < 6; i++) {
        ptr2[i] = i+1;
    }
    for(int i = 0; i < 6; i++) {
        printf("%d ", ptr2[i]);
    }

    return 0;
}
