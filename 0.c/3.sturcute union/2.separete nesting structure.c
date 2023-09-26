#include<stdio.h>

struct child {

    int num;
};

struct parent {

    int a;
    struct child ch;
};


int main() {

    struct parent pt = {100, 500};
    printf("%d %d\n", pt.a, pt.ch.num);

    return 0;
}
