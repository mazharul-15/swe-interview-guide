#include<iostream>

using namespace std;


int fibbo(int n) {

    return (n <= 1) ? n : fibbo(n-1)+fibbo(n-2);
}

int main() {

    int T, n;

    cin>> T;

    while(T--) {

        cin>> n;
        cout<< fibbo(n) << endl;
    }
    return 0;
}
