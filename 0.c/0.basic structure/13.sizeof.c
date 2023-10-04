#include<stdio.h>

int main() {

    int val = sizeof(12);
    printf("%d %d %d\n", sizeof(12), sizeof(12.34), sizeof("abc12"));

    return 0;
}
