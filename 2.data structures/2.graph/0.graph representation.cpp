/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU

    Program: Graph representation using 2D matrix OR
             adjacency Matrix

*/

#include<iostream>
#include<vector>

using namespace std;

#define sz 1000
/// graph representaion
int G[sz][sz];


int main() {

    /// for fast I/O (cin, cout)
    ios_base::sync_with_stdio(false);   /// to avoid synchronization
    cin.tie(NULL);  ///


    int n;  /// n = no. of nodes;
    int m;  /// m = no. of edges;
    int u, v;  /// u - v

    cin>> n >> m;
    for(int i = 1; i <= m; i++) {

        cin>> u >> v;

        G[u-1][v-1] = 1;
        G[v-1][u-1] = 1;
    }
    for(int i = 0; i < n ; i++) {

        for(int j = 0; j < n; j++) {

            cout<< G[i][j] << " ";
        }

        cout<< "\n";
    }

    return 0;
}
