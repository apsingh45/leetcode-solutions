// Time Complexity - O(n x m)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/find-first-palindromic-string-in-the-array

class Solution {
public:
    bool palindrome(string word){
        int i=0;
        int j=word.size()-1;
        while(i<j){
            if(word[i] != word[j])
            return 0;
            i++;
            j--;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x:words){
            if(palindrome(x))
            return x;
        }
        return "";
    }
};