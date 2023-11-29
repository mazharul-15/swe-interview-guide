#include<iostream>

using namespace std;


int main() {

    FILE *f1, *f2;

    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");

    int val, val2;
    fscanf(f1, "%d %d", &val, &val2);
    //printf("%d %d\n", val, val2);
    fprintf(f2, "%d %d\n", val, val2);

    fclose(f1);
    fclose(f2);
    return 0;
}
