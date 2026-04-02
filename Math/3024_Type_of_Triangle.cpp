// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/type-of-triangle

class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]==nums[1] && nums[1]==nums[2]) return "equilateral";

        else if(nums[0] + nums[1] > nums[2] && nums[0] + nums[2] > nums[1] && nums[1] + nums[2] > nums[0] && nums[0] != nums[1] && nums[1] != nums[2] && nums[2] != nums[0]) return "scalene";

        else if(nums[0] + nums[1] > nums[2] && nums[0] + nums[2] > nums[1] && nums[1] + nums[2] > nums[0] && (nums[0] == nums[1] || nums[1] == nums[2] || nums[2] == nums[0])) return "isosceles";

        return "none";
    }
};