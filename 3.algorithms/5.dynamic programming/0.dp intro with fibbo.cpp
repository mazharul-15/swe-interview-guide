/*

    Author: Mazharul Islam
            CSE, HSTU

    Program: Fibbo with DP
*/

#include<bits/stdc++.h>
using namespace std;

int fibbo(int n, vector<int> &dp) {

    if(n <= 1) return n;
    else if(dp[n] != -1) return dp[n];

    return dp[n] = (fibbo(n-1, dp) + fibbo(n-2, dp));
}

int main() {

    int n, t, sz = 100000;

    /// declaration of vector with initialization
    vector<int> dp(sz+1, -1);

    cin>> t;

    while(t--) {

        cin>> n;
        cout<< fibbo(n, dp) << endl;
    }


    return 0;
}
