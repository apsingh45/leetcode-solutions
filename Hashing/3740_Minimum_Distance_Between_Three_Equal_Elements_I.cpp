// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;

        for(int i = 0;i < nums.size();i++){
            mp[nums[i]].push_back(i);
        }

        int ans = INT_MAX;

        for(auto &it : mp){
            vector<int>&v = it.second;
            if(v.size() < 3) continue;

            for(int i = 0;i<v.size()-2;i++){
                int a = 2*(v[i+2]-v[i]);
                ans = min(ans,a);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};