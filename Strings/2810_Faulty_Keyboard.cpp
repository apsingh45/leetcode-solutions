// Time Complexity - O(n^2)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/faulty-keyboard

class Solution {
public:
    string finalString(string s) {
        string a = "";
        for(int i = 0;i<s.size();i++){

            if(s[i] =='i'){
                reverse(a.begin(),a.end());
            }
            else{
                a.push_back(s[i]);
            }
        }
        return a;
    }
};