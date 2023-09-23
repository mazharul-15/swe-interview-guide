#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main() {

    char c;

    while(true) {
        fflush(stdin);
        scanf("%[A-Z, a-z]", &c);
        printf("%c\n", c);
    }

    return 0;
}
