#include<stdio.h>
#include<ctype.h>

int main() {

    int n;
    char ch;

    scanf("%d", &n);

    while(n--) {
        fflush(stdin);

        scanf("%c", &ch);

        if(isprint(ch)) {
            printf("It is a printable: ");

            if(isspace(ch)) printf("It is a white space\n");
            else if(isalnum(ch)) {

                if(isalpha(ch)) {

                        printf("it is an alphabetic character: ");

                        if(isupper(ch)) {

                                printf("it is upper case: ");
                                printf("lower case: %c\n", tolower(ch));
                        }
                        else if(islower(ch)) {

                            printf("it is lower case\n");
                            printf("upper case: %c\n", toupper(ch));
                        }
                }

                else if(isdigit(ch)) printf("it is a digit\n");
            }
            else printf("%c\n", ch);
        }
        else printf("It is not printable\n");
    }

    return 0;
}
