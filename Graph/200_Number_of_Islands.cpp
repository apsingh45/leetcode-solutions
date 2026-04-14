// Time Complexity - O(n x m)
// Space Complexity - O(n x m)

// Medium 
// Leetcode - https://leetcode.com/problems/number-of-islands

class Solution {
    int n,m;
public:
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }

private:
    void dfs(vector<vector<char>>& grid,int i ,int j){
        grid[i][j] = '2';
        if(i>0 && grid[i-1][j] == '1'){
            dfs(grid,i-1,j);
        }
        if(j>0 && grid[i][j-1] == '1'){
            dfs(grid,i,j-1);
        }
        if(i<m-1&& grid[i+1][j] == '1'){
            dfs(grid,i+1,j);
        }
        if(j<n-1 && grid[i][j+1] == '1'){
            dfs(grid,i,j+1);
        }
    }
};