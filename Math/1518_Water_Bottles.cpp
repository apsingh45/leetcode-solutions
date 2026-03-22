// Time Complexity - O(log n)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/water-bottles

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result = numBottles;
        while(numBottles >= numExchange){
            result += numBottles/numExchange;
            numBottles = numBottles/numExchange + numBottles%numExchange;
        }
        return result;
    }
};