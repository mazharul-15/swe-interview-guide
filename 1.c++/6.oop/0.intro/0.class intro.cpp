#include<bits/stdc++.h>
using namespace std;

class Lambda {

    private:
        int id;
        string name;
        string add;

    public:
        void setValue(int id, string name, string add) {
            this->id = id;
            this->name = name;
            this->add = add;
        }

        void getValue() {
            cout<< this->id << " " << this->name << " " << this->add << "\n";
        }

};


int main() {

    int n, id;
    string name, add;

    cin>> n;
    Lambda obj[n];

    for(int i = 0; i < n; i++) {
        cin>> id >> name >> add;

        obj[i].setValue(id, name, add);
    }

    for(int i = 0; i < n; i++) {
        obj[i].getValue();
    }

    return 0;
}
