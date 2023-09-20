/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU

    Program: Graph representation using adjacency list

*/

#include<iostream>
#include<vector>
#define sz 1000
#define pb push_back

using namespace std;


int main() {

    /// for fast I/O (cin, cout)
    ios_base::sync_with_stdio(false);   /// to avoid synchronization
    cin.tie(NULL);  ///

    /// Adjacency List
    vector<vector<int>> G(sz);

    int n;  /// n = no. of nodes;
    int m;  /// m = no. of edges;
    int u, v;  /// u - v

    cin>> n >> m;
    for(int i = 1; i <= m; i++) {

        cin>> u >> v;

        G[u-1].pb(v-1);
        G[v-1].pb(u-1);

    }

    cout<< "\n";
    for(int i = 0; i < n ; i++) {

        cout<< (i+1) << "-> ";
        for(int j = 0; j < G[i].size(); j++) {

            cout<< (G[i][j] + 1) << " ";
        }

        cout<< "\n";
    }

    return 0;
}
