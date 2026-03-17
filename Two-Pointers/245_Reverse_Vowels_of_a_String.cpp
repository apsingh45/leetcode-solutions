// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    bool Vowel(char ch){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' ||ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size();
        while(i<=j){
            while(i<j && !Vowel(s[i])) i++;
            while(i<j && !Vowel(s[j])) j--;
            swap(s[i],s[j]);
            i++; j--;
        }
        return s;
    }
};