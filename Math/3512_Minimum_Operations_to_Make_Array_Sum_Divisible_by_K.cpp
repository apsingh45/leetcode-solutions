// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int a : nums){
            sum += a;
        }
        return (sum % k);
    }
};