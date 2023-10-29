#include<bits/stdc++.h>
using namespace std;

int main() {

    int i, j, m = 4;

    for(i = 1; i < 10; i++) {

        for(j = i; j <= 10; j++) {
            if(j == m) break;
        }
        cout << j << endl;
    }
    return 0;
}
