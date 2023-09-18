#include <bits/stdc++.h>
using namespace std;
//#define long long int ll

typedef long long int ll;


ll hr(vector<int> &A, int n, vector<ll> &dp);
ll houseRobber(vector<int>& valueInHouse);


int main() {

    int T, n, i;
    ll ans;

    scanf("%d", &T);

    while(T--) {

        scanf("%d", &n);
        vector<int> v(n);
        for(i = 0; i < n; i++) scanf("%d", &v[i]);

        ans = houseRobber(v);

        printf("%lld\n", ans);
    }
    return 0;
}

ll hr(vector<int> &A, int n, vector<ll> &dp) {

    if(n <= 1) return A[n];
    if(dp[n]) return dp[n];

    ll take = A[n] + hr(A, n-2, dp);
    ll nontake = 0 + hr(A, n-1, dp);

    return dp[n] = max(take, nontake);

}

ll houseRobber(vector<int>& valueInHouse)
{
    int sz = valueInHouse.size();
    int last = valueInHouse[sz-1];

    vector<int> :: iterator it = valueInHouse.begin();

    vector<ll> dp(sz+1, 0);

    //erase last
    valueInHouse.erase(it + sz -1);
    ll fs = 0;
    if(valueInHouse.size() > 0) fs = hr(valueInHouse, sz-2, dp);

    //erase 1st
    valueInHouse.erase(it+0);
    valueInHouse.push_back(last);
    vector<ll> dp1(sz+1, 0);
    if(valueInHouse.size() == 1) sz = 0;
    else sz -= 2;

    ll ss = hr(valueInHouse, sz, dp1);

    return max(fs, ss);
}

/*
1
7
6 5 4 3 2 1 7
*/
