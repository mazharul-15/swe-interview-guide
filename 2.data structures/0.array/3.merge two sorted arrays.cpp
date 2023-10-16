#include<iostream>
using namespace std;

void mergeTwoSortedArrays(int*, int n, int*, int m, int*);

int main(){
    int i, n, m;
    int arr1[1000], arr2[1000], arr[2000];

    scanf("%d %d", &n, &m);
    for(i = 0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i<m; i++){
        scanf("%d", &arr2[i]);
    }
    /// sort the array if not sorted;

    mergeTwoSortedArrays(arr1, n, arr2, m, arr);

    for(i=0; i<n+m; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

void mergeTwoSortedArrays(int *arr1, int n, int *arr2, int m, int *arr){
    int lp, hp, i;
    lp = hp = i = 0;

    while(lp<n && hp<m){
        if(arr1[lp]<=arr2[hp]){
            arr[i++] = arr1[lp++];
        }
        else{
            arr[i++] = arr2[hp++];
        }
    }

    while(lp<n){
        arr[i++] = arr1[lp++];
    }
    while(hp<m){
        arr[i++] = arr2[hp++];
    }
}
