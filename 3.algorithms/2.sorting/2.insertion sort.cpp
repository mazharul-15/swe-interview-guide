/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU

    Program: insertion Sort
    Process: pick an element and go to left till its not
            find its place;

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
    for(int i = 1; i < n; i++) {

        int j = i;

        while(j > 0 && (A[j-1] > A[j])) {

            swap(A[j-1], A[j]);
            j--;
        }
    }

    /// printing array
    for(int i = 0; i < n; i++) cout<< A[i] << " ";

    return 0;
}


