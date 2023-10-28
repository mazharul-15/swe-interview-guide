
/*
    Author: Mazharul Islam
    Program: sub-array generating
    Process: using recursion method

             two pointer (start, end)

             if start > end : (0, end+1)
             else: (start+1, end)


    TC: O(2^n)
    aux SC: O(2^n)

*/

#include<iostream>
#include<vector>

using namespace std;

void sub_array(vector<int> &arr, int st, int ed) {  /// sub_array(int arr[], int n)

    if(arr.size() == ed) return;
    else if(st > ed) {
        sub_array(arr, 0, ed+1);
    }
    else {
        for(int i = st; i <= ed; i++) {

            cout<< arr[i] << " ";
        }
        cout<< "\n";
        sub_array(arr, st+1, ed);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {

        cin>> arr[i];
    }
    sub_array(arr, 0, 0);

    return 0;
}


