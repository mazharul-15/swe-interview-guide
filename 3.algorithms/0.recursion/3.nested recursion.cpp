#include<iostream>
using namespace std;

int fun(int n) {

    if(n == 0) return 1;

    cout<< n << " ";
    return fun(fun(n-1));
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin>> n;
    fun(n);

    return 0;
}
