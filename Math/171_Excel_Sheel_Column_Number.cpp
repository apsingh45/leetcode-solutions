//Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/excel-sheet-column-number/description/

class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        for( char x : s)
        {
            int a = x -'A' + 1;
            ans = ans * 26 + a;
        }
        return ans;
    }
};