// Time Complexity - O(n)
// Space Complexity -O(1)

// Easy
// LeetCode - https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j = s.size()-1;
        while(i<j){
            while(i<j && !isalnum((char)s[i])){
                ++i;
            } 
            while(i<j && !isalnum((char)s[j])){
                --j;
            } 
            if(i<j){
                if(tolower((char)s[i])!=tolower((char)s[j])){
                    return false;
                    }
                ++i; 
                --j;
            }
        }
        return true;
    }
};