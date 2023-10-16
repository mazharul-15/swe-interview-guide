/*
    Author: Mazharul Islam
    Program: Finding the missing number
    TC: O(n)
    SC: O(1)

*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, i, A[100];
    int sum = 0;

    scanf("%d %d", &k, &n);
    for(i=0; i<k; i++){
        scanf("%d", &A[i]);
    }

    for(i=1; i<=n; i++){
        sum+=i;

        if(i<=k) {
            sum-=A[i-1];
        }
    }

    printf("%d\n", sum);
    return 0;
}
