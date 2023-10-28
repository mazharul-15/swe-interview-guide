/*
    Author: Mazharul Islam
    Program: longest / maximum sub-array sum

    TC: O(n^2)
    SC: O(1)

*/

#include<bits/stdc++.h>
using namespace std;

long long int longestSubarraySum(vector<int>&arr) {

    long long int sum = 0, maxSum = LONG_MIN;

    for(int i = 0; i < arr.size(); i++) {

        sum = 0;
        for(int j = i; j < arr.size(); j++) {

            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, value;
    long long sum;
    vector<int> arr;

    cin>> n;
    for(int i = 0; i < n; i++) {

        cin>> value;
        arr.push_back(value);
    }

    sum = longestSubarraySum(arr);
    cout<< "The longest Subarraysum: " << sum << endl;

    return 0;
}


