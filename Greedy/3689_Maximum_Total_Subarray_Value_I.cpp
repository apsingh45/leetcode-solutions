// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/maximum-total-subarray-value-i

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int minimum = INT_MAX;
        int maximum  = INT_MIN;

        for(int i = 0;i<nums.size();i++){
            minimum = min(minimum,nums[i]);
            maximum = max(maximum,nums[i]);
        }
        long long ans = 0;
        ans = 1LL * k * (maximum - minimum);

        return ans;
    }
};