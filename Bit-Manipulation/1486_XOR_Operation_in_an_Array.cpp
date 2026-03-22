// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/xor-operation-in-an-array

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        for(int i = 0;i<n ;i++){
            result ^= (start + (2 * i));
        }
        return result;
    }
};