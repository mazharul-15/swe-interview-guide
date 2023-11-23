#include<bits/stdc++.h>
using namespace std;

class Student {

    private:
        int res;
        int age;

    public:

        Student() {}

        Student(int u, int v) {
            res = u;
            age = v;
        }

        void operator-(){
            res--;
            age--;

            cout<< "Res: " << res << "\n";
            cout<< "Age: " << age << "\n";
        }

        void display() {
            cout<<"Initialize Data: \n";
            cout<< "Res: " << res << "\n";
            cout<< "Age: " << age << "\n";
        }
};

int main() {

    Student s1(10, 12);
    s1.display();

    -s1;

    return 0;
}
