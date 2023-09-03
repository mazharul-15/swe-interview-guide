#include<iostream>
#include "11.1-externStorageClass.h"
#include<algorithm>
#include<limits.h>
#include<utility>

using namespace std;

/// Global declaration
int extern_var = 1000;

void auto_storage_class(void);
void extern_storage_class(void);
void static_storage_class(void);
void register_storage_class(void);
void mutable_storage_class(void);
void thread_local_storage_class(void);

/// File inclusion
//#include "11.1-externStorageClass.h"

int main() {

    auto_storage_class();
    extern_storage_class();
    cout<< global_var << endl;

    extern_storage_class_2();
    return 0;
}

void auto_storage_class(void) {

    /// declaring automatic variables
    int a = 10;
    float b = 10.21;
    char c = 'A';
    double d = 45.3434;

    cout<< a << " " << b << " " << c << " " << d << endl;

}


