#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[100];

    for(int i = 0; i < 10; i++)
    {
        arr[i] = 5 + i;
    }
    for(int i = 0; i < 10; i++)
    {
        cout<< arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
