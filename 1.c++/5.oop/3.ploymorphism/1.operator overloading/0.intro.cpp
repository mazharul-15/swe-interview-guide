#include<bits/stdc++.h>
using namespace std;

class operatorOverloading {

    private:
        int a;
        int b;

    public:

        operatorOverloading() {}

        operatorOverloading(int u, int v) {
            a = u;
            b = v;
        }

        // this is automatically called when two object is use
        // obj1 + obj2
        operatorOverloading operator+(operatorOverloading &obj) {

            operatorOverloading res;

            res.a = a + obj.a;
            res.b = b + obj.b;

            return res;
        }

        operatorOverloading operator-(operatorOverloading &obj) {

            operatorOverloading res;

            res.a = a - obj.a;
            res.b = b - obj.b;

            return res;
        }

        void display() {
            cout<< a << " " << b << "\n";
        }

};

int main() {

    operatorOverloading obj1(4, 6), obj2(6, 4);

    operatorOverloading obj3 = obj1 + obj2;
    obj3.display();

    operatorOverloading obj4 = obj1 - obj2;
    obj4.display();

    return 0;
}
