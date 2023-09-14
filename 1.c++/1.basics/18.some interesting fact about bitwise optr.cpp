#include<iostream>
#include<stdio.h>

using namespace std;

int main() {

    int a, b;
    cin>> a >> b;
    cout<< (a<<-1) << " " << (a>>-1) << endl; /// undefined
    cout<< (b<<-1) << " " << (b>>-1) << endl; /// undefined

    cout<< a << " " << b << endl;

    int sum = (a|b) + (a&b);
    cout<< sum << endl;
    return 0;
}
