/*

    Author:  Mazharul Islam
             CSE, HSTU.

    Program: This program is about "type conversion"

    There are two type conversion:
        1. implicit (automatic): variable upgraded to higher type
        2. explicit:

*/

#include<iostream>

using namespace std;


int main() {

    /// implicit type conversion
    int x = 10;
    char y = 'A';
    long long int z = 1000;

    cout<< (x+y+z)<< endl;
    float f = 12.45;

    printf("\n%0.4f\n", (x+y+z+f));

    /// explicit type conversion
    int m = 55;
    printf("%0.5f", (float)m);
    return 0;
}
