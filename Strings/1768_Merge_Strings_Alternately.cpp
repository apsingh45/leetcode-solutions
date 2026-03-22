// Time Complexity - O(n + m)
// Space Complexity - O(n + m)

// Easy
// Leecode - https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.length();
        int s2 = word2.length();
        int n = max(s1,s2);
        int j = 0;
        string result;
        for( int i = 0 ; i < n ; i++){
            if(i < s1){
                result.push_back(word1[i]);
            }
            if(i < s2){
               result.push_back(word2[i]);
            }
        }
        return result;
    }
};