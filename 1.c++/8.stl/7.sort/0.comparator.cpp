#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {

    if(a >= b) {
        return true;
    }
    return false;
}

int main() {

    int A[] = {5, 7, 2, 4, 3, 7};

    sort(A, A+6, comp);

    for(int i = 0; i < 6; i++) {
        cout<< A[i] << " ";
    }
    cout<< "\n";

    return 0;
}
