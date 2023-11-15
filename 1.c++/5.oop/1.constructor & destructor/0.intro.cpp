#include<bits/stdc++.h>
using namespace std;

class student {
    private:
        int id;
        string name;

    public:
        student(int a, string b) {
            id = a;
            name = b;
        }

        void display() {
            cout<< id << " " << name << endl;
        }
};

int main() {

    student std1(1502034, "Rezwan Rafi");
    std1.display();
    return 0;
}
