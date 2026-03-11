// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size();i++){
            if(target == nums[i]) return i;
        }
        return -1;
    }
};