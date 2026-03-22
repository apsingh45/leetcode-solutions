// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones

class Solution {
public:
    bool checkOnesSegment(string s) {
        for(int i = 0;i<s.size()-1;i++){
            if(s[i] == '1' && s[i+1] == '1') return true;
        }
        return false;
    }
};