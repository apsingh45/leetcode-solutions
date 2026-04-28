// Time Complexity - O(m x n)
// Space Complexity - O(m x n) 

// Medium
// Leetcode - https://leetcode.com/problems/minimum-operations-to-make-a-uni-value

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>temp;
        bool flag = false;
        int rem = grid[0][0] % x;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(rem != grid[i][j] % x) flag = true;

                temp.push_back(grid[i][j]);
            } 
        }
        if(flag) return -1;
        sort(temp.begin(),temp.end());

        int n = temp.size();
        int mid = temp[n/2];

        int count  = 0;
        for(int i = 0;i < n;i++){
            count += ((abs(temp[i] - mid)) / x);
        }

        return count;
    }
};