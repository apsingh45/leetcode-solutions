// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/largest-even-number

class Solution {
public:
    string largestEven(string s) {
        string result = "";
        int i = s.size()-1;
        while(i >= 0 && s[i] != '2'){
            i--;
        }
        while(i >= 0){
            result = s[i] + result;
            i--;
        }
        return result;
    }
};