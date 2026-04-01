// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/number-of-common-factors

class Solution {
public:
    int commonFactors(int a, int b) {
        int n = max(a,b);
        int count = 0;
        for ( int i = 1 ; i <= n ; i++) {
            if ( a % i == 0 && b % i == 0) count ++;
        }
        return count;
    }
};