#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = new int;

    int v = 10;

    ptr = &v;
    cout<< *ptr << endl;

    return 0;
}
