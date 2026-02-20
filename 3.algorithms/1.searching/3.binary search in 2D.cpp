#include<bits/stdc++.h>
using namespace std;

int binarySearchIn2D(vector<vector<int>> &arr, int, int, int);
bool binarySearch(vector<vector<int>> &arr, int, int, int, int);

int main()
{
    int m, n, x,val;
    vector<vector<int>> arr(100);

    scanf("%d %d %d", &m, &n, &x);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &val);
            arr[i].push_back(val);
        }
    }

    int row = binarySearchIn2D(arr, 0, m-1, x);
    if(row != -1)
    {
        bool col = binarySearch(arr, row, 0, n-1, x);
        if(col == true) printf("true\n");
        else printf("false\n");
    }
    else printf("false\n");

    return 0;
}

int binarySearchIn2D(vector<vector<int>> &arr, int l, int h, int x)
{
    int sz = arr[0].size()-1;
    while(l <= h)
    {
        int mid = (l+h) / 2;

        if(arr[mid][0]<=x && x<=arr[mid][sz]) return mid;

        if(x < arr[mid][sz]) h = mid - 1;
        else l = mid + 1;
    }

    return -1;
}

bool binarySearch(vector<vector<int>> &arr, int row, int l, int h, int x)
{
    while(l <= h)
    {
        int mid = (l+h) / 2;
        if(arr[row][mid] == x) return true;

        if(x < arr[row][mid]) h = mid - 1;
        else l = mid + 1;
    }

    return false;
}
