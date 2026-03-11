// Time Complexity - O(log10(n))
// Space Complexity -O(1) 

// Medium
// Leetcode - https://leetcode.com/problems/reverse-integer
class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        long long rev = 0;
        while(x){
            rev = rev*10 + x%10;
            x /= 10;
        }

        if(rev>INT_MAX || rev<INT_MIN) return 0;
        if(flag == 1){
            return -1*rev;
        }
        else return rev;
    }
};