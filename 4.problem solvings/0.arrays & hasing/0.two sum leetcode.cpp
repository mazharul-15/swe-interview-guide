#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int b;
        map<int, int> mp;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            b = target - nums[i];
            if(mp.find(b) != mp.end())
            {
                cout<< "yes\n";
                ans.push_back(i);
                ans.push_back(mp[b]);
                break;
            }
            else
            {
                mp[nums[i]] = i;
            }

        }
        return ans;
    }
};


int main()
{
    int t, sum, n, val;
    vector<int> v, ans;
    Solution obj;

    cin>> t;

    while(t--)
    {
        cin>> n >> sum;
        for(int i = 0; i < n; i++)
        {
            cin>> val;
            v.push_back(val);
        }

        ans = obj.twoSum(v, sum);

        for(int i = 0; i < ans.size(); i++) cout<< ans[i] << " ";
        cout<< "\n";

        v.clear();
    }

    return 0;
}
