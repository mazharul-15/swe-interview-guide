#include<bits/stdc++.h>
using namespace std;

int agnosticBinarySearch(vector<int>& arr, int l, int h, int x);

int main()
{
    int n, x, t;
    vector<int> arr(100001);

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n, &x);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int idx = -1;
        idx = agnosticBinarySearch(arr, 0, n-1, x);

        if(idx != -1) printf("\nThe element is found at %d\n\n", idx+1);
        else printf("\nThe element is not found\n\n");

        arr.clear();
    }

    return 0;
}

int agnosticBinarySearch(vector<int>& arr, int l, int h, int x)
{
    bool isAsc = arr[l] < arr[h];
    while(l <= h)
    {
        int mid = (l+h) / 2;

        if(arr[mid] == x) return mid;

        if(isAsc == true)
        {
            if(x < arr[mid]) h = mid - 1;
            else l = mid + 1;
        }
        else
        {
            if(arr[mid] > x) l = mid + 1;
            else h = mid - 1;
        }
    }

    return -1;
}
