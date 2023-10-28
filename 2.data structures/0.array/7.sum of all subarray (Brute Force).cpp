/*
    Author: Mazharul Islam
    Program: Sum of all subarray

    TC: O(n^3)
    SC: O(1)

*/

#include<iostream>
using namespace std;

long long int subArraySum(int arr[], int n) {

    long long int sum = 0;
    for(int i = 0; i < n; i++) {

        for(int j = i; j < n; j++) {

            for(int k = i; k <= j; k++) {

                sum += arr[k];
            }
        }
    }

    return sum;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, n;
    int arr[10000];
    long long int sum;

    cin>> n;
    for(i = 0; i < n; i++) cin>> arr[i];
    sum = subArraySum(arr, n);

    cout<< sum << endl;

    return 0;
}
