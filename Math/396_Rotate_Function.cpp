// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/rotate-function

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int result = 0;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            result += nums[i]*i;
        }

        int maxResult = result;

        for(int i = n-1;i > 0;i--){
            result -= (nums[i]*(n-1));
            result += (sum - nums[i]);

            maxResult = max(maxResult,result);
        }
        return maxResult;
    }
};