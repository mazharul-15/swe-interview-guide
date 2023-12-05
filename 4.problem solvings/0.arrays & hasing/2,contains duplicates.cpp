#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {
            if(st.find(nums[i]) == st.end()) {
                st.insert(nums[i]);
            }
            else return true;
        }
        return false;
    }
};


int main() {

    int n, val;
    vector<int> nums;

    cin>> n;
    for(int i = 0; i < n; i++) {
        cin>> val;
        nums.push_back(val);
    }

    Solution obj;

    (obj.containsDuplicate(nums))? cout<< "True\n" : cout<< "No\n";

}
