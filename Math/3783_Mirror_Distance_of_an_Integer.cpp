// Time Complexity - O(d)
// Space Complexity - O(1)

// Easy 
// Leetcode - https://leetcode.com/problems/mirror-distance-of-an-integer

class Solution {
public:
    int mirrorDistance(int n) {
        return abs(n - reverse_int(n));
    }
    
    int reverse_int(int n){
        int ans = 0;

        while(n){
            ans = ans*10 + (n%10);
            n /= 10;
        }

        return ans;
    }
};