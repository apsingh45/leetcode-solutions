// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/binary-prefix-divisible-by-5


class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int val = 0;

        for (int bit : nums) {
            val = (val * 2 + bit) % 5;
            result.push_back(val == 0);
        }

        return result;
    }
};