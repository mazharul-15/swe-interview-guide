#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<time.h>
#include<string.h>


int main() {

   /* char str[1000];

    scanf("%[^B]s", str);
    printf("%s\n", str);

    char buffer[1000];

    sprintf(buffer, "%d + %d = %d", 10, 24, 34);
    printf("%s\n", buffer);

    fflush(stdin);
    /// unformatted I/O
    char ch;
    //getch(ch);
    //getche(ch);
    ch = getchar();
    printf("%c\n", ch);
    fflush(stdin);

    gets(str);  /// gets = get string
    puts(str);  /// puts = put string */

    int a, b, c;
    scanf("%5d %2d %d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
