// Time Complexity - O(n^2)
// Space Complexity - O(1) 

// Medium
// Leetcode - https://leetcode.com/problems/find-triangular-sum-of-an-array

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        while(n > 0){
            result = 0;
            for(int i = 0; i < n - 1 ;i++){
                nums[i] = (nums[i] + nums[i+1]) % 10;
            }     
            n--;   
        }
        return nums[0];
    }
};