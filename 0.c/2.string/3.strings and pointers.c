#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>


int main() {

    char str[1000];
    //fgets(str, 1000, stdin);
    gets(str);
    puts(str);

    char *ptr = str;
    while(*ptr != '\0') {

        printf("%c", *ptr++);
    }
    return 0;
}
