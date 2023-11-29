#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        int id;
        string name;

    public:

        void init(int a, string b) {
            id = a;
            name = b;
        }

        Student() {}

        Student(Student &t) {
            id = t.id;
            name = t.name;
        }

        void display() {
            cout<< id << " " << name << "\n\n";
        }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Student std1;
    std1.init(1402007, "Rafi");
    std1.display();

    Student std2(std1);
    std2.display();

    return 0;
}
