#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>

typedef struct students STUDENT;

struct students {

    int id = 100;
    char name[500];
};

int main() {

    printf("%d", sizeof(STUDENT));

    return 0;
}
