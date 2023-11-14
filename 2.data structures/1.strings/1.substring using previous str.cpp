#include<bits/stdc++.h>
using namespace std;

void subString(string &str) {

    for(int i = 0; str[i]; i++) {

        string subStr;
        for(int j = i; str[j]; j++) {

            subStr += str[j];
            cout<< subStr << "\n";

        }
    }

}


int main() {

    string str;

    cin>> str;
    subString(str);

    return 0;
}

