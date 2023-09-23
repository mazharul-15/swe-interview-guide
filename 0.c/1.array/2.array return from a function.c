#include<stdio.h>

int *func() {

    static int arr[5] = {1, 2, 55, 23, 453};

    return arr;
}


int main() {

    int *ptr = func();

    for(int i = 0; i < 5; i++) printf("%d ", *ptr++);

    return 0;
}
