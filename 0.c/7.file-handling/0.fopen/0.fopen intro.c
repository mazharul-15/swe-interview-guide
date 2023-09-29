#include<stdio.h>


int main() {

    FILE *file, *file2;

    file = fopen("input.txt", "a");
    file2 = fopen("input2.txt", "a+");
    if(file2 == NULL) printf("File2 is not exist\n");
    fprintf(file, "HelloWorld hi,, bangladesh\n");
    fprintf(file2, "I am Mazharul Islam\n");

    return 0;
}
