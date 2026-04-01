// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/count-distinct-numbers-on-board

class Solution {
public:
    int distinctIntegers(int n) {
        if( n == 1) return 1;
        else return n-1;
    }
};