// Time Complexity - O(log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        long long low = 1;
        long long high = num/2;
        while(low <= high) {
            long long mid = low + (high - low) / 2;
            if(mid * mid == num) return true;
            else if(mid*mid < num) {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return false;
    }
};