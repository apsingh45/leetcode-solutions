// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int count_zero = 0;
        int max_length = 0;

        while (j < nums.size()) {
            if (nums[j] == 0) count_zero++;
            j++;

            while (count_zero > 1) {
                if (nums[i] == 0) count_zero--;
                i++;
            }
            max_length = max(max_length, j-i-1);
        }
        return max_length;
    }
};