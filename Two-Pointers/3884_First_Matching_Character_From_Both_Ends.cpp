// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/first-matching-character-from-both-ends

class Solution {
public:
    int firstMatchingIndex(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i<=j){
            if(s[i] == s[j]) return i;

            i++;
            j--;
        }

        return -1;
    }
};