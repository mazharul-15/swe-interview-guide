#include<iostream>

using namespace std;

class student {

    int id;
    float gpa;
    long long int amount;

    public:
        int print(void);

};

class car {
};

struct teacher {

    //int id;
    string name;
};

union un {
    int a;
    int b;
};

int main() {

    /// find data size
    cout<< "int: " << sizeof(int) << endl;
    cout<< "float: " << sizeof(float) << endl;
    cout<< "size of string: " << sizeof(string) << endl;

    /// find size of diff variables
    int a;
    char b;
    long long int c;

    cout<< "int variable: " << sizeof(a) << endl;
    cout<< "char variable: " << sizeof(b) << endl;
    cout<< "long long int variable: " << sizeof(c) << endl;

    /// number of byte taken by an expression
    int x;
    float f;
    long long int y;
    cout<< "Byte taken the expression: " << sizeof(y+x) << endl;

    /// finding the size of array;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int sz_arr = sizeof(arr) / sizeof(arr[0]);
    cout<< "size of array: " << sz_arr << endl;

    /// finding the size of class
    cout<< "size of class: " << sizeof(student) << endl;
    cout<< "size of empty class: " << sizeof(car) << endl;

    /// finding the size of structure and union
    cout<< "size of structure: " << sizeof(teacher) << endl;
    cout<< "size of union: " << sizeof(un) << endl;

    /// finding the size of pointer
    int *ptr = &a;
    //cout<< "size of pointer *ptr is " << sizeof(*ptr) << end;
    cout<< "size of pointer *ptr is " << sizeof(*ptr) << endl;
    cout<< "size of pointer ptr is " << sizeof(ptr) << endl;

    return 0;
}
