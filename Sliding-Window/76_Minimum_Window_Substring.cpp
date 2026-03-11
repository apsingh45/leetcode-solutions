// Time Complexity - O(n)
// Space Complexity - O(1)

// Hard
// Leetcode - https://leetcode.com/problems/minimum-window-substring

class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";

        unordered_map<char,int>mp;

        for(char c : t){
            mp[c]++;
        }

        int count = t.size();
        int i = 0,j = 0;
        int a = 0;
        int ans = INT_MAX;

        while(j<s.size()){
            if(mp[s[j]] > 0){
                count--;
            }

            mp[s[j]]--;
            j++;

            while(count == 0){
                if((j-i) < ans){
                    ans = j-i;
                    a = i;
                }

                mp[s[i]]++;

                if(mp[s[i]] > 0){
                    count++;
                }
                i++;
            }
        }

        if(ans == INT_MAX) return "";
        return s.substr(a,ans);
    }
};