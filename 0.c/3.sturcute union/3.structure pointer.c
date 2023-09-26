#include<stdio.h>


struct students {

    int id;
    char name[100];
};


int main() {

    struct students std;
    scanf("%d %s", &std.id, std.name);
    printf("%d %s\n", std.id, std.name);

    struct students *ptr = &std;
    printf("print through pointer: %d %s\n", ptr->id, ptr->name);

    printf("%d\n", sizeof(*ptr));

    return 0;
}
