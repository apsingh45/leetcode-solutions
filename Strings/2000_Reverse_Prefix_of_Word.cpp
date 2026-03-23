// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy 
// Leetcode - https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int flag = 0;
        string s = "";
        for(int i = 0;i<word.size();i++){
            if(word[i] == ch) flag = 1;

        }

        if(flag == 0) return word;
        else{
            int i = 0;
            
            while(word[i] != ch && i<word.size()){
                s += word[i++];
            }
            s+=word[i++];
            reverse(s.begin(),s.end());
            for(int j = i;j<word.size();j++){
                s+=word[j];
            }
        }
        return s;
    }
};
