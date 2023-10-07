#include<iostream>

using namespace std;

void print(int arr[], int n) {

    for(int i = 0; i < n; i++) cout<< arr[i] << " ";
    cout<< "\n";
}


int main() {

    /// fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, A[1000];

    cin>> n;
    for(int i = 0; i < n; i++) cin>> A[i];

    print(A, n);

    return 0;
}
