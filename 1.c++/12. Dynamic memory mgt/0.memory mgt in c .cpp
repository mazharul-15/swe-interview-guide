/*
    Dynamic Memory Management
    1.malloc() = memory allocation
        ptr = (dataType *)malloc(n*sizeof(dataType)

    2.calloc() = contiguous allocation
        ptr = (dataType *)calloc(n, sizeof(dataType)

    3.free()  = used to free memory
        free(pointer_name)

    4.realloc()  = reallocation of which is already allocated
        ptr = realloc(ptr , newSize)  /// newSize = n*sizeof(dataType)
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>  /// memory management in C

using namespace std;

int* malloc_func(int n) {

    int *ptr = (int *)malloc(n*sizeof(int));

    return ptr;
}

int* calloc_func(int n) {

    int *ptr = (int *)calloc(n, sizeof(int));

    return ptr;
}

int* realloc_func(int *ptr, int newSize) {

    ptr = realloc(ptr, newSize*sizeof(int));

    return ptr;
}

int* free_func(int *ptr) {

    free(ptr);

    return ptr;
}

int main() {

    int n, i;
    cin>> n;

    /// malloc
    int *ptr = malloc_func(n);

    for(i = 0; i < n; i++) {
        cin>> ptr[i];
    }

    for(i = 0; i < n; i++) {
        cout<< ptr[i] << " ";
    }
    cout<< endl;

    int m;
    cin>> m;
    int *ptr2 = calloc_func(n);

    for(i = 0; i < m; i++) {
        cin>> ptr2[i];
    }

    for(i = 0; i < m; i++) {
        cout<< ptr2[i] << " ";
    }
    cout<< endl;

    ///ptr = free_func(ptr);
    free(ptr);

    //if(ptr == NULL) cout<< "ptr is NULL\n";
    //else cout<< "ptr is not NULL\n";

    for(i = 0; i < n; i++) cout<< ptr[i] << " ";
    cout<< endl;

    free(ptr2);
    for(i = 0; i < m; i++) cout<< ptr2[i] << " ";

    return 0;
}
