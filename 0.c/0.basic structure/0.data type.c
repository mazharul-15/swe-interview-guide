/*#include<stdio.h>
#include<stdbool.h>

typedef enum{ false, true} bool;

int main() {

    bool flag = true;

    printf("%d", true);

    bl a = true;
    bl b = false;

    printf("\n%d %d\n", a, b);

    return 0;
}
*/
#include <stdio.h>

typedef enum { false, true } bool;

int main()
{
	bool a = true;
	bool b = false;

	printf("True : %d\n", a);
	printf("False : %d", b);

	return 0;
}
