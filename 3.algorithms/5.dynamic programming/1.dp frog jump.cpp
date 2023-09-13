#include<bits/stdc++.h>

using namespace std;

int dp[45];
int H[45];

int jump(int n) {

    if(n <= 1) return dp[1];
    if(dp[n]) return dp[n];

    int l = jump(n-1) + abs(H[n]-H[n-1]);
    int r = jump(n-2) + abs(H[n]-H[n-2]);

    return dp[n] = min(l,r);
}


int main() {

    int n, i;

    cin>> n;
    for(i = 1; i <= n; i++) cin>> H[i];
    H[0] = H[1];

    cout<< jump(n) << endl;

    return 0;
}
