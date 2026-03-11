// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/search-in-rotated-sorted-array-ii

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size();i++){
            if(target == nums[i]) return 1;
        }
        return 0;
    }
};