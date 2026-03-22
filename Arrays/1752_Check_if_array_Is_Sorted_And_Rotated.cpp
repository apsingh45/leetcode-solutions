// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/check-if-array-is-sorted-and-rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drops = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                drops++;
            }
        }
         if (nums[n - 1] > nums[0]) {
            drops++;
        }
        return drops <= 1;
    }
};