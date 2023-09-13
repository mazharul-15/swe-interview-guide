#include<bits/stdc++.h>
using namespace std;


int main() {

    int prev1 = 1;
    int prev2 = 0;
    int cur;
    int n, i;

    cin>> n;

    for(i = 2 ; i <= n; i++){

        cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }

    cout<< cur;
    return 0;
}
