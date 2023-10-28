/*
    Author: Mazharul Islam
    Program: sub-array generating
    Process: using iteration

    TC: O(n^2) if use print loop: O(n^3)
    aux SC: O(1)

*/

#include<iostream>

using namespace std;

void sub_array(int *arr, int n) {  /// sub_array(int arr[], int n)

    for(int i = 0; i < n; i++) {

        for(int j = i; j < n; j++) {

            for(int k = i; k <= j; k++) {

                cout<< arr[k] << " ";
            }
            cout<< "\n";
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int arr[1000];

    cin>> n;
    for(int i = 0; i < n; i++) {

        cin>> arr[i];
    }
    sub_array(arr, n);

    return 0;
}


