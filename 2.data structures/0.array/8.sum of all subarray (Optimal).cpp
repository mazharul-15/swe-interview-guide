/*
    Author: Mazharul Islam
    Program: Sum of all subarray

    TC: O(n)
    SC: O(1)

*/

#include<bits/stdc++.h>
using namespace std;

long long int subArraySum(vector<int> &arr) {

    int n = arr.size();
    long long int sum = 0;

    for(int i = 0; i < n; i++) {

        int total_occur = (n-i)*(i+1);
        sum += (arr[i]*total_occur);
    }

    return sum;
}

int main() {

    int n, val;
    long long int sum;
    vector<int> arr;

    cin>> n;
    for(int i = 0; i < n; i++) {

        cin>> val;
        arr.push_back(val);
    }

    sum = subArraySum(arr);
    cout<< "The Sub-array Sum: " << sum << "\n";

    return 0;
}
