// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/sum-multiples

class Solution {
public:
    int sumOfMultiples(int n) {
        long long sum = 0;
        for (int i = 1; i <= n ; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i ;
            }
        }
        return sum;
    }
};