#include<iostream>
using namespace std;

void printNumber(int n){
    if(n > 0){
        printf("%d ", n);
        printNumber(n-1);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>> n;

    printNumber(n);

    return 0;
}
