// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/reverse-string-prefix

class Solution {
public:
    string reversePrefix(string s, int k) {
        int i = k-1;
        string result = "";
        while(i >= 0){
            result += s[i];
            i--;
        }
        i = k;
        while(i < s.size()){
            result += s[i];
            i++;
        }
        return result;
    }
};