// Time Complexity - O(N)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/jump-game-iii

class Solution {
public:
    unordered_map<int,int>mp;
    bool helper(vector<int>& v,int pos){
        if(pos < 0 || pos >= v.size()) return false;
        if(v[pos] == 0)return true;
        if(mp[pos]) return false;
        mp[pos] = 1;
        
        return (helper(v,pos-v[pos]) || helper(v,pos+v[pos]));
    }
    bool canReach(vector<int>& arr, int start) {
        return helper(arr,start);
    }
};