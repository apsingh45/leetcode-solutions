// Time Complexity - O(n^2)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/find-missing-and-repeated-values

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        int a = 0;
        int b = 0;
        for(int i = 1;i <= n*n;i++){
            if(mp.find(i) == mp.end()){
                b = i;
            }
            if(mp[i] == 2){
                a = i;
            }
        }
        return {a,b};
    }
};