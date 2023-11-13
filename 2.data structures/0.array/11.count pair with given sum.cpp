#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, n, sum, cn, A[100];
    unordered_map<int, int> umap;

    cin>> n >> sum;
    for(i = 0; i < n; i++) cin>> A[i];

    for(i = cn = 0; i < n; i++) {
        /// sum = a + b
        /// b = sum - a
        int a = A[i];
        int b = sum - A[i];
        if(umap[b] > 0) {
            cn += umap[b];
            umap[a]++;
        }
        else umap[a]++;
    }

    cout<< cn << endl;

    return 0;
}
