// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int ans = 0;
        while (left < right) {
            ans = max(ans, nums[left]+nums[right]);
            left++;
            right--;
        }

        return ans;
    }
};