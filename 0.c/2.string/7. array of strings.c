#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<time.h>


int main() {

    //char str[3][10] = {"CSE", "EEE", "ECE"}; /// waste of memory

    /// array of pointer
    char *str[3] = {"CSE", "EEE", "ECE"};

    for(int i = 0; i < 3; i++) printf("%s\n", str[i]);

    char *arr[3];
    for(int i = 0; i < 3; i++) {
        scanf("%s", arr[i]);
        fflush(stdin);
    }

    for(int i = 0; i < 3; i++) printf("%s\n", arr[i]);
    return 0;
}
