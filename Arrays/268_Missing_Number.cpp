// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]!=0) return 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]-1){
                return nums[i]-1;
            }
        }
        return nums[nums.size()-1]+1;
    }
};