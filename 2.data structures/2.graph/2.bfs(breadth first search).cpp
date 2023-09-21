/*
    Author: Mazharul Islam
            CSE, HSTU

    Program: BFS(Breadth First Search)

*/

#include<iostream>
#include<vector>
#include<queue>

#define sz 100000

using namespace std;

int visit[sz];
int level[sz];
vector<vector<int>> G(1000);

void BFS(int);

int main() {

    /// for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, u, v;

    cin>> n >> m;

    for(int i = 1; i <= m; i++) {

        cin>> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
   /* for(int i = 1; i <= n; i++) {

        cout<< i << " -> ";
        for(int j = 0; j < G[i].size(); j++) cout<< G[i][j] << " ";
        cout<< "\n";
    } */

    BFS(1);

    for(int i = 1; i <= n; i++) cout<< level[i] << " ";
    cout<< "\n";
    return 0;
}

/// BFS Code
void BFS(int st_node) {

    queue<int> q;
    int u, v;

    visit[st_node] = 1;
    q.push(st_node);

    while(!q.empty()) {

        int u = q.front();
        q.pop();
        for(int i = 0; i <G[u].size(); i++) {

            v = G[u][i];
            if(visit[v] == 0) {
                visit[v] = 1;
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }
}

/*
4 3
1 2
2 3
2 4

*/
