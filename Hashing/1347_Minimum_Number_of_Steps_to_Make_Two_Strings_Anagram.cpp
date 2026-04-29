// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>freq_s(26,0);
        vector<int>freq_t(26,0);

        for(int i = 0;i<s.size();i++){
            freq_s[s[i] - 'a']++;
            freq_t[t[i] - 'a']++;
        }

        int ans = 0;
        for(int i = 0;i<26;i++){
            if(freq_s[i] > freq_t[i]){
                ans += (freq_s[i] - freq_t[i]);
            }
        }

        return ans ;
    }
};