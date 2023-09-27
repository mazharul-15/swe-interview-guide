#include<stdio.h>


int main() {

    /// increment - Decrement
    int val = 198;
    int *ptr = &val;
    printf("%d", ptr);

    ptr++;  /// increment
    printf(" %d", ptr);

    ptr--;  /// dcrement
    printf(" %d\n", ptr);

    /// ptr - integer value
    ptr = ptr - 2;
    printf("subtraction: %d ", ptr);

    ptr = ptr + 2;
    printf("Addition : %d\n", ptr);

    /// subtracting two pointer
    int a = 66, b = 55;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    int result = ptr1 - ptr2;
    printf("ptr1 : %d\n ptr2: %d\n ptr1-ptr2 = %d\n", ptr1, ptr2, ptr1 - ptr2);

    return 0;
}
