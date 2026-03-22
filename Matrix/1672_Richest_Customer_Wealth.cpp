// Time Complexity - O(n x m)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        int max_wealth = 0;
        for(int i = 0;i <accounts.size();i++){
            sum = 0;
            for(int j = 0;j<accounts[i].size();j++){
                sum += accounts[i][j]; 
            }
            max_wealth =  max(max_wealth,sum);
        }
        return max_wealth;
    }
};