// Time complexity - O(n × m)
// Space Complexity -O(1)

// Easy
// Leetcode - https://leetcode.com/problems/island-perimeter

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j] == 1) count++;
            }
        }
        int perimeter = count*4;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if((i != 0 && grid[i-1][j] == 1)&& grid[i][j] == 1) perimeter--;
                if((j != 0 && grid[i][j-1] == 1) && grid[i][j] == 1) perimeter--;
                if((i !=grid.size()-1 && grid[i+1][j] == 1) && grid[i][j] == 1) perimeter--;
                if((j !=grid[0].size()-1 && grid[i][j+1] == 1)&& grid[i][j] == 1) perimeter--;
            }
        }
        return perimeter;
    }
};