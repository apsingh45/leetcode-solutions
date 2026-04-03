// Time Complexity - O(n^3)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/maximize-expression-of-three-elements

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = -301;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                for(int k = j+1;k<nums.size();k++){
                    int a = nums[k]+nums[j]-nums[i];
                    sum = max(a,sum);
                }
            }
        }
        return sum;
    }
};