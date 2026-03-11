// Time Complexity - O(log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int num) {
        if(num == 1) return 1;
        long long low = 1;
        long long  high = num/2;
        long long  mid = 0;
        while(low <= high) {
            mid = low + (high - low) / 2;
            if(mid*mid == num) return mid;
            else if(mid * mid < num) {
                low=mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        return low-1;
    }
};