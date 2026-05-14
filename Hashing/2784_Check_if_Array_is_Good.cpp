// Time Complexity - O(N)
// Space Compelxity - O(N)

// Easy 
// Leetcode - https://leetcode.com/problems/check-if-array-is-good

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return false;
        unordered_map<int,int>mp;

        for(int a : nums){
            mp[a]++;
        }

        for(int i = 1;i<n;i++){
            if(mp.find(i) == mp.end()) return false;
            if(i == n-1 && mp[i] != 2) return false;
        }
        return true;
    }
};