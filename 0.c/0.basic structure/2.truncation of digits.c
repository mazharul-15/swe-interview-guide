#include<stdio.h>

int main() {

    float a = 123.34523;
    double b = 45.123245145;
    long double c = 234.4514541;

    printf("%f\n", truncf(a));
    printf("%0.0lf\n", trunc(b));

    printf("%Lf\n", truncl(c));

       long double x1 = 2.0, x2 = 3.9, x3 = -3.3, x4 = 4.9;

    // using truncf function which return
    // Truncated value of the input
    printf(" Truncated value is %Lf \n", truncl(x1) );
    printf(" Truncated value is %Lf \n", truncl(x2) );

    // For negative values
    printf(" Truncated value is %Lf \n", truncl(x3) );
    printf(" Truncated value is %Lf \n", truncl(x4) );
    return 0;
}
