//Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/contains-duplicate-ii


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> map;
        for(int i = 0;i<nums.size();i++){
            map[nums[i]].push_back(i);
        }

        for(int i = 0;i<nums.size();i++){
            if(map.find(nums[i]) != map.end()){
                for(int j = 0; j<map[nums[i]].size();j++){
                    if(i != map[nums[i]][j] && abs(i - map[nums[i]][j]) <= k)return true;
                }
            }
        }
        return false;
    }
};