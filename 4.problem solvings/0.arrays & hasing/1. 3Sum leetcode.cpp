#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    //vector<vector<int>> threeSum(vector<int>& nums) {
    void threeSum(vector<int>& nums) {
        int b, k = 0;
        unordered_map<int, int> mp;
        vector<vector<int>> ans(1000);

        for(int i = 0; i < nums.size() - 2; i ++) {
            //c = (-1)*nums[i];

            for(int j = i+1; j < nums.size(); j++)
            {
                b = -1*(nums[j] + nums[i]);

                if(mp[b] > 0)
                {
                    ans[k].push_back(nums[i]);
                    ans[k].push_back(b);
                    ans[k].push_back(nums[j]);

                    k++;
                    mp[nums[j]] = 1;
                }
                else
                {
                    mp[nums[j]] = 1;
                }

            }
            mp.clear();
        }

        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < ans[i].size(); i++)
            {
                cout<< ans[i][j] << " ";
            }
            cout<< "\n";
        }

        //return ans;
    }
};


int main()
{
    int t, sum, n, val;
    vector<int> v;
    vector<vector<int>> ans;
    Solution obj;

    cin>> t;

    while(t--)
    {
        cin>> n;
        for(int i = 0; i < n; i++)
        {
            cin>> val;
            v.push_back(val);
        }

        //ans = obj.threeSum(v);
        obj.threeSum(v);
        /*
        for(int i = 0; i < ans.size(); i++)
        {
            for(int j = 0; j < ans[i].size(); i++)
            {
                cout<< ans[i][j] << " ";
            }
            cout<< "\n";
        } */
        cout<< "\n";

        v.clear();
    }

    return 0;
}
