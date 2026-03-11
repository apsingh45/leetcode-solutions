// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[n-1];
        int maxSum = nums[n-1];
        for(int i = n-2; i >= 0; i--) {
            int curr = max(nums[i] + prev, nums[i]);
            maxSum = max(maxSum, curr);
            prev = curr;
        }
        return maxSum;
    }
};