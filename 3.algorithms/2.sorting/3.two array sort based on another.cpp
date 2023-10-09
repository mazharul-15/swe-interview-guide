#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>

#define sz 100000

using namespace std;

vector<pair<int, int>> v;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, n, u, v;
    cin>> n;
    for(i = 0; i < n; i++) {

        cin>> u >> v;
        v.push_back(make_pair(u,v));
    }

    sort(v, v+n);

    for(i = 0; i < n; i++) cout<< v[i].fast << " " << v[i].second << "\n";

    return 0;
}
