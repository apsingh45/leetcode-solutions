// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/find-xor-beauty-of-array

class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int a = 0;
        int b = 0;

        for(int i = 0;i<nums.size();i++){
            a = a | nums[i];
            b = b ^ nums[i];
        }

        return (a & b);
    }
};