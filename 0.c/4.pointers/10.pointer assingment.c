#include<stdio.h>

int main() {

    int val =897;
    int *k = &val;
    int *p, *r;
    //k = 10;

    *p = *k;
    printf("%d %d", *p, k);

    return 0;
}
