// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
       
       unordered_map<int,int> freq;
       for(char i : s){
        freq[i]++;
       }
       for(int i = 0 ;i < s.size(); i++){
        if(freq[s[i]] == 1) return i;
       }
       return -1;
    }
};