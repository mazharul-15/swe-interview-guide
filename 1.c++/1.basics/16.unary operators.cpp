#include<iostream>
using namespace std;

int main() {

    int a, b;
    cin>> a >> b;

    //bool c = (a==b) && cout<< "Software Engineering" << endl;
    bool c;
    c = (a==b) && cout<< "hi i am And operator\n" << "value of C: " << c << endl;
    c = (a<b) && cout<< "Not Equal" << "value of C: " << c << endl;

    // another techniques
    bool d = (a!=b) || cout<< "hi i am OR operator\n";
    return 0;
}
