// Time Complexity - O(N)
// Space Complexity - O(N)

// Easy
// Leetcode - https://leetcode.com/problems/limit-occurrences-in-sorted-array

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int a : nums){
            if(mp.find(a) == mp.end() || mp[a] < k){
                mp[a]++;
            }
        }

        vector<int>ans;
        for(auto &p : mp){
            int a = p.first;
            for(int i = 1;i<=p.second;i++){
                ans.push_back(a);
            }
        }

        return ans;
    }
};