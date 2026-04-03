// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/reverse-words-with-same-vowel-count

class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int count_vowel = 0;
        while(i<s.size() && s[i] != ' '){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count_vowel++;
            i++;
        }
        int count = 0;
        for(int j = i;j<s.size();j++){
            count = 0;
            int start = j;
            while(j<s.size() && s[j] != ' '){
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') count++;
                j++;
            }
            int end = j-1;

            if(count == count_vowel){
                while(start < end){
                    swap(s[start++],s[end--]);
                }
            }
            
        }
        return s;
    }
};