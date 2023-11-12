#include<bits/stdc++.h>
using namespace std;


int main() {

    string str;
    int t;
    unordered_set<char> uset;

    cin>> t;

    while(t--) {
        cin>> str;

        for(int i = 0; str[i]; i++) uset.insert(str[i]);

        unordered_set<char>:: iterator itr;
        for(itr = uset.begin(); itr != uset.end(); itr++) {
            cout<< *itr << endl;
        }

        uset.clear();
    }

    return 0;
}
