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

    //student std1(1502034, "Rezwan Rafi");
    student std1 = student(1502055, "Mazharul Islam");
    std1.display();

    student std2(std1);
    std2.display();
    return 0;
}

