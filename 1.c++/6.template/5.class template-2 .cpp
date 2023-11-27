#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Array {

    private:

        T *arr;
        int sz;

    public:

        Array(int n) {

            sz = n;
            arr = new T[sz];
        }

        void set_value() {

            for(int i = 0; i < sz; i++) {
                cin>> arr[i];
            }
        }

        void get_value() {

            for(int i = 0; i < sz; i++) {

                cout<< arr[i] << " ";
            }
            cout<< endl;
        }

};

int main() {

    Array<int> A1(5);
    A1.set_value();
    A1.get_value();

    Array<int> A2(5);
    A2.set_value();
    A2.get_value();

    return 0;
}
