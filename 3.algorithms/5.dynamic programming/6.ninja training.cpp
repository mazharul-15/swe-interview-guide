/*
    Author:  Mazharul Islam
             CSE, HSTU

    Program: max point from Ninja's
             total n days training

*/

#include<iostream>

using namespace std;

int A[1000][3];
int dp[1000][3];

int ninja_training(int, int, int);

int main() {

    /// for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mx;

    cin>> n;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < 3; j++) cin>> A[i][j];
    }

    mx = ninja_training(n-1, -1, 0);
    cout<< "Max point: " << mx << "\n";

    return 0;
}

int ninja_training(int n, int c, int mx) {

    if(n == -1) return 0;

    for(int j = 0; j < 3; j++) {

        if(j != c) {

            int c_mx = A[n][j] + ninja_training(n-1, j, mx);
            mx = max(mx, c_mx);
        }
    }
}

/*
3
1 5 2
4 3 8
5 2 7

1
5 3 10

2
9 2 1
1 2 9
*/


