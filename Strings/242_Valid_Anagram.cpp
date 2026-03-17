// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s == t){
            return 1;
        }
        return 0;
    }
};