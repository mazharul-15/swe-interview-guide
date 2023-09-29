#include<stdio.h>
#include<stdlib.h>


int main() {

    int r, c;
    printf("Enter row and column value: ");
    scanf("%d %d", &r, &c);

    int *arr = malloc(r*c*sizeof(int));

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) scanf("%d", &arr[(i*c)+j]);
    }

    for(int i = 0; i < r; i++) {

        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i*c +j]);
        }
        printf("\n");
    }

    return 0;
}
