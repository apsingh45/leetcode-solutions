// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i = 0; i< nums.size();i++){
            if(nums[i] >= k){
                return i;
            }
        }
        return 0;
    }
};