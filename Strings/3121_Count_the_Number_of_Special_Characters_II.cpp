// Time Complexity - O(N)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/count-the-number-of-special-characters-ii/?envType=daily-question&envId=2026-05-27

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        unordered_map<char,int>visited;
        int ans = 0;

        for(int i = 0;i<word.size();i++){
            char ch = word[i];
            if(ch <= 'Z' && ch >= 'A' && mp.find(ch) == mp.end()) mp[ch] = i;
            else if(ch <= 'z' && ch >= 'a') mp[ch] = i;
            else continue;
        }

        for(int i = 0;i<word.size();i++){
            char ch = word[i];
            if(ch <= 'Z' && ch >= 'A' && mp.find(ch + 32) != mp.end()){
                if(mp[ch] >= mp[ch + 32] && visited.find(ch)==visited.end()){
                    ans++;
                    visited[ch]++;
                }
            }

            if(ch <= 'z' && ch >= 'a' && mp.find(ch - 32) != mp.end()){
                if(mp[ch] <= mp[ch - 32] && visited.find(ch - 32) == visited.end()){
                    ans++;
                    visited[ch -32]++;
                }
            }
        }
        return ans;
    }
};