// Time Complexity - O(N*K)
// Space Complexity - O(N*K)

// Medium
// Leetcode - https://leetcode.com/problems/number-of-prefix-connected-groups

class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>mp;

        for(int i = 0;i<words.size();i++){
            string s = words[i];
            if(s.size() >= k) mp[s.substr(0, k)]++;
        }

        int count = 0;
        for(auto &p : mp){
            if(p.second >= 2) count++;
        }

        return count;
    }
};