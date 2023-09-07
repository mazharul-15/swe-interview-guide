/*
    Author:  Mazharul Islam
             B.Sc. in CSE, HSTU.

    Program: Literals details

             Literals are the constant values that are
             are assigned to the constant variables.

             Literals represents fixed values that can not
             be modified

*/

#include<iostream>
#include<fstream>
#include<math.h>

#define sz int(1E5)

using namespace std;

int main() {

    int A[sz];
    int val = 1E9;
    printf("%d\n", val);

    for(int i = 0; i < 5; i++) cin>> A[i];
    for(int i = 0; i < 5; i++) cout<< A[i] << " ";

    return 0;
}
