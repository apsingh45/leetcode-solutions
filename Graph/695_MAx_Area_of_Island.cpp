// Time Complexity - O(n x m)
// Space Complexity - O(n X m)

// Medium
// Leetcode - https://leetcode.com/problems/max-area-of-island

class Solution {
    int m = 0;
    int n = 0;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int ans = INT_MIN;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 1){
                    int temp = dfs(grid,i,j);
                    ans = max(ans,temp);
                }
            }
        }
        return (ans == INT_MIN)? 0 : ans;
    }
private:
    int dfs(vector<vector<int>>& grid,int i ,int j){
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0){
            return 0;
        }
        grid[i][j] = 0;
        
        return dfs(grid,i-1,j)+dfs(grid,i,j-1)+dfs(grid,i+1,j)+dfs(grid,i,j+1)+1;
    }
};