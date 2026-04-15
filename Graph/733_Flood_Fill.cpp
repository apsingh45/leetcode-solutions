// Time Complexity - O(m x n)
// Space Complexity - O(m x n)

// Easy
// Leetcode - https://leetcode.com/problems/flood-fill

class Solution {
    int m;
    int n;
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        m = image.size();
        n = image[0].size();
        int a = image[sr][sc];

        if (a == color) return image;
        
        dfs(image,sr,sc,color,a);
        return image;
    }

private:
    void dfs(vector<vector<int>>& grid,int i,int j,int color,int a){
        grid[i][j] = color;
        if(i>0 && grid[i-1][j] == a){
            dfs(grid,i-1,j,color,a);
        }
        if(j>0 && grid[i][j-1] == a){
            dfs(grid,i,j-1,color,a);
        }
        if(i<m-1&& grid[i+1][j] == a){
            dfs(grid,i+1,j,color,a);
        }
        if(j<n-1 && grid[i][j+1] == a){
            dfs(grid,i,j+1,color,a);
        }
    }
};