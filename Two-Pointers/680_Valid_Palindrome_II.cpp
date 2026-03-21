// Time Complexity - O(n)
// Space Complexity -O(1)

// Easy
// Leetcode - https://leetcode.com/problems/valid-palindrome-ii

class Solution {
public:
    bool isPalindrome(string s,int left,int right){
        while(left<right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        int count = 0;
        while(i < j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else if(isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1)) return true;
            else return false;
        }
        return true;
    }
};