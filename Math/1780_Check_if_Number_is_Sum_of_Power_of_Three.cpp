// Time Complexity - O(log n)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three

class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){
            if(n % 3 == 2) return false;
            n = n / 3;
        }
        return true;
    }
};