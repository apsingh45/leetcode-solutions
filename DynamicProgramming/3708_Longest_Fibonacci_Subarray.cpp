// Time Complexity - O(N)
// Space Complexity -O(1)

// Medium
// Leetcode - https://leetcode.com/problems/longest-fibonacci-subarray

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 2;
        int curr_length = 2;

        for(int i = 2;i<nums.size();i++){
            if(nums[i] == (nums[i-1]+nums[i-2])) curr_length++;
            else curr_length = 2;

            ans = max(curr_length,ans);
        }
        return ans;
    }
};