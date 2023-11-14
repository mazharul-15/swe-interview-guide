#include<bits/stdc++.h>
using namespace std;

void subString(string &str) {

    for(int i = 0; str[i]; i++) {

        for(int j = i; str[j]; j++) {

            for(int k = i; k <= j; k++) {

                cout<< str[k];
            }
            cout<< "\n";
        }
    }

}


int main() {

    string str;

    cin>> str;
    subString(str);

    return 0;
}
