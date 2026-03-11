// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int min_index = nums.size()-1;
        int max_index = -1;
        for(int i = 0;i < nums.size();i++ ){
            if(nums[i] == target){
                min_index = min(min_index, i);
                max_index = max(max_index, i);
            }
        }
        if(max_index != -1){
            result.push_back(min_index);
            result.push_back(max_index);
        }
        else{
            result.push_back(-1);
            result.push_back(-1);
        }
        return result;
    }
};