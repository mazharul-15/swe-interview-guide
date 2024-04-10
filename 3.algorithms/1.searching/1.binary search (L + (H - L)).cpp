#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int l, int h, int x);

int main() {

    int n, x;
    vector<int> arr(100001);

    scanf("%d %d", &n, &x);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int idx = -1;
    idx = binarySearch(arr, 0, n-1, x);

    if(idx != -1)
    {
        printf("\nThe element is found!!! at %d position\n", idx+1);
    }
    else
    {
        printf("\nThe element is not found\n");
    }
    return 0;
}


int binarySearch(vector<int> &arr, int l, int h, int x)
{
    while(l <= h)
    {
        int mid = (l + (h - l)) / 2;
        if(arr[mid] == x)
        {
            return mid;
        }

        if(x < arr[mid]) h = mid - 1;
        else l = mid + 1;
    }

    return -1;
}
