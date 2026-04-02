// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/number-of-employees-who-met-the-target

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i = 0; i< nums.size();i++){
            if(nums[i] >= k){
                return nums.size()-i;
            }
        }
        return 0;
    }
};