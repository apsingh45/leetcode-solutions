// Time Complexity - O(√n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/arranging-coins

class Solution {
public:
    int arrangeCoins(int n) {
        int row = 1;
        while(row <= n){
            n -= row;
            row++;
        }
        return --row;
    }
};