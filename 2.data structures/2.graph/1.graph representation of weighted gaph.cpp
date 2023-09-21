/*
    Author: Mazharul Islam
            CSE, HSTU

    Program: directed weighted Graph representation

*/

#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main() {

    /// for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<pair<int,int>>> G(1000);
    int n, m, u, v, w;

    cin>> n >> m;

    for(int i = 1; i <= m; i++) {

        cin>> u >> v >> w;
        G[u-1].push_back(make_pair(v,w));
        G[v-1].push_back(make_pair(u,w));
    }

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < G[i].size(); j++) {

            int ff = G[i][j].first;
            int ss = G[i][j].second;

            cout<< (i+1) << " -> " << ff << ": " << ss << endl;
        }
    }
    return 0;
}

/*
4 3
1 2 10
2 3 15
2 4 51

*/
