// Time Complexity - O(n^2)
// Space Complexity - O(n^2)

// Medium
// Leetcode - https://leetcode.com/problems/increment-submatrices-by-one

class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));

        for(int i = 0;i < queries.size();i++){
            int row1 = queries[i][0];
            int col1 = queries[i][1];
            int row2 = queries[i][2];
            int col2 = queries[i][3];

            for(int a = row1;a<=row2;a++){
                for(int j = col1;j<=col2;j++){
                    matrix[a][j]++;
                }
            }
        }
        return matrix;

    }
};