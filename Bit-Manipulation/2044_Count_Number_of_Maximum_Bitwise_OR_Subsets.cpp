// Time Complexity - O(2^N)
// Space Complexity -O(N)

// Medium
// Leetcode - https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets

class Solution {
public:
    int count = 0;
    void helper(vector<int>& nums,int i,int maxOR,int currOR){
        if(i == nums.size()){
            if(maxOR == currOR) count++;
            return;
        }

        helper(nums,i+1,maxOR,currOR | nums[i]);

        helper(nums,i+1,maxOR,currOR);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR = 0;
        for(int i = 0;i<nums.size();i++){
            maxOR |= nums[i];
        }

        helper(nums,0,maxOR,0);
        return count;
    }
};