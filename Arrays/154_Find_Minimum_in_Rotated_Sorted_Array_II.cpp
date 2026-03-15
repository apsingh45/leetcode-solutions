Time Complexity - O(n)
// Space Complexity - O(1)

// Hard
// Leetcode - https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii


class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = 5000;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < ans){
                ans = nums[i];
            }
        }
        return ans;
    }
};