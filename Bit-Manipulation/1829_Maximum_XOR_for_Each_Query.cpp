// Time Complexity - O(N)
// Space Complexity -O(1)

// Medium
// Leetcode - https://leetcode.com/problems/maximum-xor-for-each-query

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int max_XOR = (1 << maximumBit) - 1;
        int n = nums.size();
        int curr_XOR = 0;

        for(int i = 1;i<n;i++){
            nums[i] = nums[i]^nums[i-1];
        }

        for(int i = 0;i < nums.size();i++){
            nums[i] ^= max_XOR;
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};