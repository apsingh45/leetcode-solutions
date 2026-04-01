// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/smallest-even-multiple

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if( n % 2 == 0 ) return n;
         return 2*n;
    }
};