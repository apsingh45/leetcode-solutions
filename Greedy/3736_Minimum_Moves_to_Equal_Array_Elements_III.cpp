// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii

class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maximum = nums[nums.size()-1];
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            count += maximum-nums[i];
        }
        return count;
    }
};