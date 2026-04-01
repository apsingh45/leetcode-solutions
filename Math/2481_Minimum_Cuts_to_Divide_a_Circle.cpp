// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/minimum-cuts-to-divide-a-circle

class Solution {
public:
    int numberOfCuts(int n) {
        if (n < 2) return 0;
        if (n % 2 == 0) return n/2;
        return n;
    }
};