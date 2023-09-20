/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU

    Program: Bubble Sort
    Process: swapping adjacent elements each time

    TC: O(n*n)
    SC: O(1);

*/

#include<iostream>
#define  sz 100000

using namespace std;

int main() {

    ///for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A[sz];
    int n;

    cin>> n;
    for(int i = 0; i < n; i++) cin>> A[i];

    /// sorting section
    for(int i = 0; i < n; i++) {

        for(int j = 1; j < n-i; j++) {

            if(A[j-1] > A[j]) swap(A[j-1], A[j]);
        }
    }

    /// printing array
    for(int i = 0; i < n; i++) cout<< A[i] << " ";

    return 0;
}

