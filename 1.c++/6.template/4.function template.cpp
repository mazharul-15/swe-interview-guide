#include<bits/stdc++.h>
using namespace std;

template <typename T, typename U>
void arrayPrint(T arr[], U n) {

    for(int i = 0; i < n; i++) {
        cout<< arr[i] << " ";
    }
    cout<< "\n";
}

int main() {

    int arr[] = { 23, 54, 89, 23, -110};
    char chr[] = "AbCsed";

    arrayPrint<int, int>(arr, 5);

    arrayPrint<char, int>(chr, 6);

    return 0;
}
