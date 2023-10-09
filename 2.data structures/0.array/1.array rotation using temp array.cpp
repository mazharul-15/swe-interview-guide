/*
    Author: Mazharul Islam
            CSE, HSTU

    Program: 1D array left rotation using tmp array
    TC: O(n)
    SC: O(n)


*/

#include<iostream>
using namespace std;

void arrayRotation(int arr[], int, int);
void arrayPrint(int arr[], int);

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d, i, arr[100000];

    cin>> n >> d;
    for(i = 0; i < n; i++) cin>> arr[i];

    arrayRotation(arr, n, d);
    arrayPrint(arr, n);

    return 0;
}

void arrayRotation(int arr[], int n, int d) {

    int i, j, tmp[n];

    d = d%n;
    for(i = 0; i < d; i++) tmp[i] = arr[i];
    for(i = d, j = 0; i < n; i++) arr[j++] = arr[i];
    for(i = 0; i < d; i++) arr[j++] = tmp[i];
}


void arrayPrint(int arr[], int n) {

    for(int i = 0; i < n; i++) cout<< arr[i] << " ";
    cout<< "\n";
}





