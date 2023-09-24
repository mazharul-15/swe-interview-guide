#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main() {

    char str[100];

    scanf("%[^\n]s", str);
    fflush(stdin);
    printf("scanset input: %s\n", str);

    fgets(str, 100, stdin);
    fflush(stdin);
    printf("fgets input: %s\n", str);

    gets(str);
    puts(str);

    return 0;
}
