// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/reverse-degree-of-a-string

class Solution {
public:
    int reverseDegree(string s) {
        int product = 0;
        for(int i = 0;i < s.size();i++){
            product +=  ((123-int(s[i])) *(i+1));
        }
        return product;
    }
};