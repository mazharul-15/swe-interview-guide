/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU

    Program: Selection Sort
    Process: select the min/max index for each index
             and swap them

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
    int n, mn_id;

    cin>> n;
    for(int i = 0; i < n; i++) cin>> A[i];

    /// sorting section
    for(int i = 0; i < n-1; i++) {

        mn_id = i;
        for(int j = i+1; j < n; j++) {

            if(A[j] < A[mn_id]) mn_id = j;
        }

        swap(A[i], A[mn_id]);
    }

    /// printing array
    for(int i = 0; i < n; i++) cout<< A[i] << " ";

    return 0;
}
