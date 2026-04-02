// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/count-partitions-with-even-sum-difference

class Solution {
public:
    int countPartitions(vector<int>& nums){
        int sum = 0;
        for (int x : nums) sum += x;
        if (sum % 2 != 0) return 0;
        return nums.size() - 1;
    }
};