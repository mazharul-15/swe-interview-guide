/*
    Author: Mazharul Islam
    Program: Printing all sub-sequences of an array
    Method: take not-take method using recursion
    TC: O(2^n)
    SC: O(n)

*/

#include<bits/stdc++.h>
using namespace std;

void subSet(vector<int> &v, vector<int> &ans, int id)
{
    if(id == v.size())
    {
        for(auto &i: ans) cout<< i << " ";
        cout<< "\n";
        return ;
    }

    ans.push_back(v[id]); /// take
    subSet(v, ans, id + 1);

    ans.pop_back(); /// not take
    subSet(v, ans, id + 1);
}

int main()
{
    int n, val, t;
    vector<int> v, ans;

    cin>> t;
    while(t--)
    {
        cin>> n;
        for(int i = 0; i < n; i++)
        {
            cin>> val;
            v.push_back(val);
        }

        subSet(v, ans, 0);
        v.clear();
    }

    return 0;
}
