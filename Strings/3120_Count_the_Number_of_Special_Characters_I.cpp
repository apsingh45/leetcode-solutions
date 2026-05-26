// Time Complexity - O(N)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/count-the-number-of-special-characters-i

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i = 0;i<word.size();i++){
            char ch = word[i];
            mp1[ch]++;
        }

        for(int i = 0;i<word.size();i++){
            char ch = word[i];
            char ca_ch = ch - 32;

            if(ch <= 'z' && ch >= 'a' && mp1.find(ca_ch) != mp1.end() && mp2.find(ch) == mp2.end()){
                count++;
                mp2[ch]++;
            }
        
        }
        return count;
    }
};