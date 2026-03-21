// Time Complexity - O(log n)
// Space Complexity -O(1)

// Easy
// Leetcode - https://leetcode.com/problems/binary-gap

class Solution {
public:
    int binaryGap(int n) {
        int last = -1;
        int maxGap = 0;
        int position = 0;
        
        while(n > 0) {
            if(n & 1) { 
                if(last != -1) {
                    maxGap = max(maxGap, position - last);
                }
                last = position;
            }
            n = n >> 1;
            position++;
        }
        
        return maxGap;
    }
};