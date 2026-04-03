// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/toggle-light-bulbs

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>mp;
        vector<int>ans;

        for(int i = 0;i<bulbs.size();i++){
            mp[bulbs[i]]++;
        }

        for(int i = 0;i<bulbs.size();i++){
            if(mp[bulbs[i]] % 2 != 0){
                ans.push_back(bulbs[i]);
                mp[bulbs[i]] = 0;
            }
        }
        sort(ans.begin(),ans.end());

        return ans;
    }
};