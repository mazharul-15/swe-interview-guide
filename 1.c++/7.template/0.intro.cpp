#include<bits/stdc++.h>
using namespace std;

/*template <typename T> T myMax(T a, T b) {

    return (a > b) ? a : b;
}*/

template <class T> T myMax(T a, T b) {

    return (a>b) ? a : b;
}

int main() {

    cout<< myMax<int>(6, 4) << endl;

    cout<< myMax<double>(12.02, 12.01) << endl;

    cout<< myMax<char>('a', 'B') << endl;

    cout<< myMax(34, 56) << endl;
    return 0;
}
