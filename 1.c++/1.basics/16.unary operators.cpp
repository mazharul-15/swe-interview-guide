#include<iostream>
using namespace std;

int main() {

    int a, b;
    cin>> a >> b;

    //bool c = (a==b) && cout<< "Software Engineering" << endl;
    bool c;
    c = (a==b) && cout<< "Software Engineering\n" << "value of C: " << c << endl;
    c = (a<b) && cout<< "Not Equal" << "value of C: " << c << endl;
    return 0;
}
