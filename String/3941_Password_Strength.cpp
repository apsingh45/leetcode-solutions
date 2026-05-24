// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/password-strength/description

class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char,int>mp;
        int ans = 0;

        for(int i = 0;i<password.size();i++){
            char ch = password[i];
            
            if((ch >= 'a' && ch <= 'z') && mp.find(ch) == mp.end()) ans += 1;
            else if((ch >= 'A' && ch <= 'Z') && mp.find(ch) == mp.end()) ans += 2;
            else if((ch >= '0' && ch <= '9') && mp.find(ch) == mp.end()) ans += 3;
            else if((ch == '!' || ch == '@' || ch == '#' || ch == '$') && mp.find(ch) == mp.end()) ans += 5;
            mp[ch]++;
        }

        return ans;
    }
};