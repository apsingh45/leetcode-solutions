// Time Complexity - O(N)
// Space Complexity -O(N)

// Medium
// Leetcode - https://leetcode.com/problems/bulls-and-cows

class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>mp;
        int cow = 0;
        int bull = 0;
        for(int i = 0;i<secret.size();i++){
            if(secret[i] == guess[i]){
                bull++;
            }
            else {
                mp[secret[i]]++;
            }
        }

        for(int i = 0;i < secret.size();i++){
            if(secret[i] != guess[i] && mp[guess[i]] > 0){
                cow++;
                mp[guess[i]]--;
            }
        }

        string ans = to_string(bull) + "A" + to_string(cow) + "B";
        return ans;
    }
};