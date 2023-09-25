#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<time.h>


int main() {

    char str[] = "GEEKS";
    printf("%d\n", strlen(str));

    char s1[] = {'A', 'B', 'C', '\0'};
    printf("%d\n", strlen(s1));

    return 0;
}
