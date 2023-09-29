#include<stdio.h>


int main() {

    FILE *fptr;
    fptr = fopen("filescanf.txt", "r");

    int year;
    char str[100], str2[100];

    while(!feof(fptr)) {

        fscanf(fptr, "%s %d", str, &year);
        printf("%s %d\n", str, year);
    }

    fclose(fptr);

    return 0;
}
