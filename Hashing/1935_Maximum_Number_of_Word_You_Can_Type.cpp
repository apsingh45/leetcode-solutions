// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leecode - https://leetcode.com/problems/maximum-number-of-words-you-can-type/description/

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> st;
        for(char c : brokenLetters) st.insert(c);
        bool flag = true;
        int count = 0;
        for(char c : text){
            if( c == ' '){
                if(flag) count++;
                flag = true;
            }
            else if(!flag) continue;
            else if(st.count(c)) flag = false;
        }
        if(flag) count++;
        return count;
    }
};