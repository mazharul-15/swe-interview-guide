#include<bits/stdc++.h>

using namespace std;


int main() {

    FILE *f1, *f2;

    f1 = fopen("inputStr.txt", "r");
    f2 = fopen("outputStr.txt", "w");


    char str[10000];

    while(!feof(f1)) {

        fgets(str, 10002, f1);
        fprintf(f2, "%s\n", str);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
