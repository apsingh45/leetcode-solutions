// Time Complexity - O(n + m)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/adding-spaces-to-a-string

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i = 0;
        string result ="";
        for(int j = 0;j<s.size();j++){
            if(i< spaces.size() && j == spaces[i]){
                result += " ";
                i++;
            }
            result += s[j];
        }
        return result;
    }
};