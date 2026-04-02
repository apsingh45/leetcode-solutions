// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/sort-vowels-in-a-string

class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                vowel.push_back(s[i]);
                s[i] = '#';
            }
        }
        sort(vowel.begin(), vowel.end());
        int j = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '#') {
                s[i] = vowel[j++];
            }
        }
        return s;
    }
};