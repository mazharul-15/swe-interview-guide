#include<stdio.h>

void func(int arr[], int sz) {

    printf("\nsize of array in user func: %d\n", sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sz; i++) printf("%d ", arr[i]);
    printf("\n");
    printf("%d\n", *(++arr));
}

int main() {

    int A[100];
    int n, i;

    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &A[i]);

    printf("size of array in main: %d\n", sizeof(A));
    printf("\nArray in main: ");
    for(i = 0; i< n; i++) printf("%d ", A[i]);

    func(A, n);

    printf("\nPointer at main: %d\n", *A;

    return 0;
}
