#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>

int main() {

    char str1[100] = "Hello";
    char str2[100] = "Hello";

    //fgets(str1, 100, stdin);
    //fflush(stdin);
    //fgets(str2, 100, stdin);

    /*printf("%s\n%s\n", str1, str2);

    int ans = strcmp(str1, str2);
    printf("%d\n", ans);


    strcpy(str1,str2);
    printf("After Copy: %s\n", str1);

    strcat(str1, str2);
    printf("After concat: %s\n", str1);*/

    char s1[] = "I am a Software engineer, I am Mazhrul Islam";
    char s2[] = "am";
    char *ptr = strstr(s1, s2);
    if(ptr) {
        printf("yes found\n");
        strcpy(ptr, "Mazharul");
        printf("%s\n", s1);
    }
    else printf("Not found\n");

    printf("%s\n", ptr);

    return 0;
}
