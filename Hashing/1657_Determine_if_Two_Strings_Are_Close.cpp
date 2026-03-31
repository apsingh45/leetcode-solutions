// Time Complexity -O(n + m + k log k)
// Space Complexity - O(k) 

// Medium 
// Leetcode - https://leetcode.com/problems/determine-if-two-strings-are-close

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();

        if(m != n) return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for(char c : word1) {
            freq1[c - 'a']++;
        }
        for(char c : word2) {
            freq2[c - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if((freq1[i] == 0 && freq2[i] != 0)||(freq1[i] != 0 && freq2[i] == 0)){
                return false;
            }
        }

        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());

        return freq1 == freq2;
    }
};