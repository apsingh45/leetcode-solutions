// Time Complexity - O(n)
// Space Complexity -O(1)

// Medium
// Leetcode - https://leetcode.com/problems/maximum-sum-circular-subarray 

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;
        int maxSum = nums[0], currMax = 0;
        int minSum = nums[0], currMin = 0;
        for (int x : nums) {
            currMax = max(x, currMax + x);
            maxSum = max(maxSum, currMax);
            currMin = min(x, currMin + x);
            minSum = min(minSum, currMin);
            totalSum += x;
        }
        if (maxSum < 0) return maxSum;
        return max(maxSum, totalSum - minSum);
    }
};