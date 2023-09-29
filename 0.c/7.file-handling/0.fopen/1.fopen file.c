#include<stdio.h>


int main() {

    FILE *file = fopen("input.txt", "r");

    int display;

    while(!feof(file)) {

        display = fgetc(file);
        printf("%c ", display);
    }

    fclose(file);
    return 0;
}
