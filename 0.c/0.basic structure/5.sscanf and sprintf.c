#include<stdio.h>

int main() {

    int a = 10, b = 5;
    int c, d;

    char str[1000];

    sprintf(str, "a = %d and b = %d", a, b);

    sscanf(str, "a = %d and b = %d", &c, &d);

    printf("%d %d\n", c, d);

    return 0;
}
