// Time Complexity - O(N)
// Space Complexity - O(N)

//Easy 
// Leetcode - https://leetcode.com/problems/concatenate-array-with-reverse

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();

        for(int i = n-1;i >= 0;i--){
            nums.push_back(nums[i]);
        }

        return nums;
    }
};