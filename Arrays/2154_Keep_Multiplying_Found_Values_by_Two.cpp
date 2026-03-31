// Time Complexity -O(n log n)
// Space Complexity - O(1) 

// Easy
// Leetcode - https://leetcode.com/problems/keep-multiplying-found-values-by-two

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size();i++){
            if(nums[i] == original){
                original *= 2; 
            }
        }
        return original;
    }
};