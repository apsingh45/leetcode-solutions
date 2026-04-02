// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/harshad-number
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        if(x == 100)  return 1;
        sum = x/10 + x%10;
        if(x % sum == 0) return sum;
        return -1;
    }
};