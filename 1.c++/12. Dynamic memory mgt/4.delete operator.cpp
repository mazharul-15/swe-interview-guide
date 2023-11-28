#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = new(nothrow) int(100);
    cout<< *ptr << "\n\n";

    int *arr = new(nothrow) int[100];

    for(int i = 0; i < 10; i++)
    {
        arr[i] = 30 + i;
    }

    for(int i = 0; i < 10; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<< "\n";

    delete ptr;
    delete[] arr;

    return 0;
}
