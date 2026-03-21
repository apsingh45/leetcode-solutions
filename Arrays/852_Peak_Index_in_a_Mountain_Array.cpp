// Time Complexity - O(n)
// Space Complexity -O(1)

// Medium
// Leetcode - https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        for(int i = 1;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1] && nums[i]> nums[i-1]){
                return i;
            }
        }
        return -1;
    }
};