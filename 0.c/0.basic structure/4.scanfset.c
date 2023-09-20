/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU

    Program: scanset (%[]s)

*/

#include<stdio.h>
#include<stdbool.h>

int main() {

    char str[10000];

    while(true) {

        fflush(stdin);
        /// scanset
        scanf("%[^\N]s", str);
        ///fflush(stdin);

        printf("%s\n", str);
    }

    return 0;
}
