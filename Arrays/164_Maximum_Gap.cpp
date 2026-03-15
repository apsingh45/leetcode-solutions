//Time Complexity - O(n log n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/maximum-gap

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if (nums.size()==1) return 0;
        int max_diff = 0;
        for ( int i = 0; i < nums.size() - 1 ; i++) {
            int diff = abs(nums[i] - nums[i + 1]);
            if ( max_diff < diff ) {
                max_diff = diff;
            }
        }
        return max_diff;
    }
};