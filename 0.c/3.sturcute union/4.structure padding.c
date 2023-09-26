#include<stdio.h>

struct child {

    char ch;
    float f, f1;
};


int main() {

    printf("%d\n", sizeof(struct child));
    return 0;
}
