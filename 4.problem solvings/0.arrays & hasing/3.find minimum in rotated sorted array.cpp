
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int L = 0, R = nums.size()-1, m;
        while(L < R) {

            m = (L + R) / 2;
            if(nums[L] < nums[m+1] && nums[m] < nums[R]) R = m;
            else if(nums[m] < nums[m+1] && nums[m] < nums[R]) R = m;
            else L = m+1;
        }

        return nums[L];
    }
};````


int main() {

    int n, val, t;

    cin>> t;

    while(t--)
    {
        vector<int> nums;

        cin>> n;
        for(int i = 0; i < n; i++) {
            cin>> val;
            nums.push_back(val);
        }

        Solution obj;

        cout<< obj.findMin(nums) << endl;
    }

    return 0;
}
