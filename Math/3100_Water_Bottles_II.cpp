// Time Complexity - O(sqrt(n))
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/water-bottles-ii

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int result = numBottles;
        int empties = numBottles;

        while (empties >= numExchange) {
            empties -= numExchange;
            numExchange++;
            result++;
            empties++;
        }

        return result;
    }
};