#include<iostream>
using namespace std;

int main() {

    /// for fast I/O(cin, cout)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, curi;
    int prev2 = 0;
    int prev1 = 1;

    n = 10;
    if(n <= 1) prev1 = 0;
    for(int i = 2; i <= n; i++) {

        curi = prev2 + prev1;
        prev2 = prev1;
        prev1 = curi;
    }

    cout<< prev1 << endl;
    return 0;
}
