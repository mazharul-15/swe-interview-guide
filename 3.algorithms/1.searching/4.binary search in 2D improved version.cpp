#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> &arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();

    int lo = 0;
    int hi = row * col - 1;

    while(lo <= hi)
    {
        int mid = lo + (hi - lo)/2;

        int tRow = mid / col;
        int tCol = mid % col;

        int val = arr[tRow][tCol];
        if(val == target) return true;

        if(val < target) lo = mid + 1;
        else hi = mid - 1;
    }

    return false;
}

int main()
{
    int m, n, target, val;
    scanf("%d %d %d", &m, &n, &target);
    vector<vector<int>> arr(m);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &val);
            arr[i].push_back(val);
        }
    }

    bool flag = binarySearch(arr, target);
    if(flag == true)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
