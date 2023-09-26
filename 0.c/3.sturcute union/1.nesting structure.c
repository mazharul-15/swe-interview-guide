#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<limits.h>

/// embedded structure
struct parent {

    int a;

    struct child {
        int b;
    }d;
};


int main() {

    struct parent v1 = {100, 54};

    printf("%d %d", v1.a, v1.d.b);

    return 0;
}
