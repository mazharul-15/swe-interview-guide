#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#include<ctype.h>


int main() {

    int arr[5] = {34};
    int sz = sizeof(arr) / sizeof(arr[0]);
    //for(int i = 0; i < sz; i++) printf("%d ", arr[i]);

    int *ptr = arr;
    int *ptr2 = &arr[0];

    printf("%p\n%p\n ", arr, &arr);
    printf("%p\n%p\n", ptr, ptr2);
    return 0;
}
