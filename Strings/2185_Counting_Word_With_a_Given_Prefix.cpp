// Time Complexity - O(N.M)
// Space Complexity - O(M)

// Easy
// Leetcode - https://leetcode.com/problems/counting-words-with-a-given-prefix

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int a = pref.size();
        int count = 0;

        for(int i = 0;i<words.size();i++){
            string str = words[i].substr(0,a);
            if(str == pref) count++;
        }
        return count;
    }
};