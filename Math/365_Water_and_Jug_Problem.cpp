// Time Complexity - O(log(min(x,y)))
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/water-and-jug-problem

class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if (target > x + y) return false;
        if (target == 0) return true;
        if (x == 0 && y == 0) return target == 0;

        return (target % gcd(x, y) == 0);
    }
};