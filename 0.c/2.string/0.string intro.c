#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#include<time.h>
#include<string.h>

int main() {

    char str[20] = {'a', 'b', 'c', ' ', 'B', '\0'};
    char str2[] = {'A', 'B', 'C', 'D', '\0'};

    printf("%s\n%s\n", str, str2);
    printf("%d %d\n", strlen(str), strlen(str2));

    int i = strlen(str);
    while(i < 10) {

        char ch;

        ch = getchar();
        fflush(stdin);

        str[i] = ch;
        i++;
    }
    printf("%s %d\n", str, strlen(str));

    return 0;
}
