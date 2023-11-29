#include<bits/stdc++.h>
using namespace std;

template <typename T, typename U>
class Student {

    private:

        T id;
        U name;

    public:

        Student() {

            this->id = 1502034;
            this->name = "Rezwan Rafi";
        }

        void display() {

            cout<< this->id << " " << this->name << "\n";
        }
};

int main() {

    Student<int, string> S1;
    S1.display();

    return 0;
}
