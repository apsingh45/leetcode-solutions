//Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/find-peak-element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i = 0;i < nums.size();i++) {
            if((i == 0 || nums[i] > nums[i-1]) &&
               (i == nums.size()-1 || nums[i] > nums[i+1])){
                return i;
                break;
            }
        }
        return 0;
    }
};