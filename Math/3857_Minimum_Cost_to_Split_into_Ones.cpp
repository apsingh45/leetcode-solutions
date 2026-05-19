// Time Compkexity - O(1)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/minimum-cost-to-split-into-ones

class Solution {
public:
    int minCost(int n) {
        return (n * (n-1)) / 2;        
    }
};