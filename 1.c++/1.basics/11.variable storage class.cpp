#include<iostream>
#include "11.1-externStorageClass.h"
#include<algorithm>
#include<limits.h>
#include<utility>

using namespace std;
typedef class test Test;

/// Mutable
class test {
    public:
        mutable int y;
        int x;

        /// constructor
        test() {
            x = 10;
            y = 33;
        }
};

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

    static_storage_class();
    static_storage_class();
    static_storage_class();

    register_storage_class();

    /// Mutable Section
    const Test t1;
    t1.y = 1000;
    //t1.x = 2000;

    cout<< "value of Y: " << t1.y << endl;
    cout<< "value of X: " << t1.x << endl;

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


void static_storage_class(void) {
    static int cn = 0;
    cn++;
    cout<< "Static Variable: " << cn << endl;
}

void register_storage_class(void) {
    register int cn = 0;
    int *ptr = &cn;

    cout<< *ptr << " " << (*ptr = 100) << endl;
}


