// Time Complexity - O(N)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/check-adjacent-digit-differences

class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i = 0;i<s.size()-1;i++){
            if(abs((s[i] - '0') - (s[i+1] - '0')) > 2) return false;
        }
        return true;
    }
};