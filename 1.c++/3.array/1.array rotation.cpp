#include<iostream>
using namespace std;


int main() {

    /// fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // declaration
    int n, i, tmp, d;
    int arr[100000];

    // input
    cin>> n >> d;
    for(i = 0; i < n; i++) cin>> arr[i];

    // processing
    d = d % n;
    while(d--) {

        tmp = arr[0];
        for(i = 1; i < n; i++) arr[i-1] = arr[i];
        arr[n-1] = tmp;
    }

    // output
    for(i = 0; i < n; i++) cout<< arr[i] << " ";
    cout<< endl;

    return 0;
}
