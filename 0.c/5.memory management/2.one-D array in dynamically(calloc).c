#include<stdio.h>
#include<stdlib.h>

int main() {

    int n; /// size of array
    printf("Enter size of dynamic array: ");
    scanf("%d", &n);

    int *arr = (int*)calloc(n,sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    /// reallocation of array size;
    int m;
    printf("\nEnter new size of array: ");
    scanf("%d", &m);
    arr = (int*)realloc(arr, m*sizeof(int));

    for(int i = n; i < m ; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < m; i++) printf("%d ", arr[i]);

    return 0;
}
