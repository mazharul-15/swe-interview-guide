/*
    Author: Mazharul Islam
            CSE, HSTU


    program: Binary Search(iterative)

    TC: O(nlog(n))
    SC: O(1)
*/

#include<iostream>
#include<algorithm>
#include<vector>

#define sz 100000

using namespace std;

int A[sz];

int binarySearch(int, int, int);

int main() {

    /// for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val;

    cin>> n;
    for(int i = 0; i < n; i++) cin>> A[i];
    cin>> val;
    sort(A, A+n);

    int ans = binarySearch(0, n-1, val);
    if(ans > -1) cout<< "The element is found\n";
    else cout<<"The element is not found\n";

    return 0;
}

/// binary search code (iterative)
int binarySearch(int l, int h, int val) {

    while(l <= h) {

        int mid = (l+h) / 2;
        if(A[mid] == val) return mid;

        if(val < A[mid]) h = mid - 1;
        else l = mid + 1;
    }

    return -1;
}

/*
10
5 10 2 3 4 88 99 7 3 1

*/
