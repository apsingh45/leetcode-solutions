// Time Complexity - O(√c)
// Space Complexity -O(1)

// Medium
// Leetcode - https://leetcode.com/problems/sum-of-square-numbers

class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long a=0;a*a<=c;a++){
            double b=sqrt(c-a*a);
            if(b==(int)b){
                return true;
            }
        }
        return false;
    }
};