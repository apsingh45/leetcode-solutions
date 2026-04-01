// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/first-letter-to-appear-twice

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        for(int i = 0;i<s.size();i++){
            if(mp.find(s[i]) != mp.end()){
                return s[i];
            }
            mp[s[i]]++;
        }
        return '0';
    }
};