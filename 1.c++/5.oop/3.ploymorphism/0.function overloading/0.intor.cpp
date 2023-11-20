#include<bits/stdc++.h>
using namespace std;

class functionOverloading {
    private:
        int a;
        int b;

    public:
        void add(int a, int b) {
            cout<< "Sum: " << a+b << endl;
        }

        void add(int a, int b, int c) {
            cout<< "Sum: " << a+b+c << endl;
        }

        void add(double a, double b) {
            cout<< "Sum: " << a+b << endl;
        }
};


int main() {

    functionOverloading obj;
    obj.add(3, 4);
    obj.add(3, 4, 5);
    obj.add(45.5, 0.5);
    return 0;
}
