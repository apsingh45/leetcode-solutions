// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/count-monobit-integers

class Solution {
public:
    int countMonobit(int n) {
        int count = 1;
        for(int i = 1; i <= n;i++){
            if((i & (i + 1)) == 0) count++;
        }
        return count;
    }
};