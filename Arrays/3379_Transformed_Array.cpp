// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/transformed-array

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>result(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            if(nums[i] > 0){
                result[i] = nums[(i + nums[i])% n];
            }
            else{
                result[i] = nums[abs((n - abs(nums[i])%n + i) % n)];
            }
        }
        return result;
    }
};