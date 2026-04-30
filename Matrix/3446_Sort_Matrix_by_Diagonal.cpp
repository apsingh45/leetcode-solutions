// Time Complexity - (N^2 log N)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/sort-matrix-by-diagonals

class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        for(int k = 1;k<n;k++){
            int j = k;
            int i = 0;
            vector<int>temp;
            while(j<n){
                temp.push_back(grid[i][j]);
                i++;
                j++;
            }

            j = k;
            i = 0;
            int a = 0;
            sort(temp.begin(),temp.end());
            while(j<n){
                grid[i][j] = temp[a];
                i++;
                j++;
                a++;
            }
        }

        for(int k = 0;k<n;k++){
            int i = k;
            int j = 0;
            vector<int>temp;
            while(i<n){
                temp.push_back(grid[i][j]);
                i++;
                j++;
            }

            i = k;
            j = 0;
            int a = 0;
            sort(temp.begin(),temp.end(),greater<int>());
            while(i<n){
                grid[i][j] = temp[a];
                i++;
                j++;
                a++;
            }
        }

        return grid;
    }
};