#include<stdio.h>
#define pf printf("YES\n")

int main() {

    if(pf) {}

    if(printf("YES if statement\n")) {}

    switch(printf("YES switch case\n")) {}

    while(!printf("YES while loop\n")) {}

    for(; !(printf("YES for loop\n")); ) {}

    return 0;
}
