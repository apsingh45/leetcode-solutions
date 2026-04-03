// Time Complexity - O(k^2)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/flip-square-submatrix-vertically

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        
        for(int i = 0; i < k; i++){
            for(int j = 0; j < k; j++){
                if(i > (k-1-i) || (i == (k-1-i) && j >= (k-1-j))) continue;
                swap(grid[x+i][y+j], grid[x+k-1-i][y+j]);
            }
        }

        return grid;
    }
};