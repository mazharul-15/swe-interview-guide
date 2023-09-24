#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

void func(char str[]) {

    printf("%s\n", str);
}

int main() {

    char str[100];
    gets(str);
    func(str);

    return 0;
}
