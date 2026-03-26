// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/a-number-after-a-double-reversal

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num==0) return 1;
        return num%10;
    }
};