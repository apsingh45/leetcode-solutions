// Time Complexity - O(n²)
// Space Complexity - O(n²)

// Medium
// Leetcode - https://leetcode.com/problems/spiral-matrix-ii

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row_start = 0; 
        int row_end = n -1;
        int column_start = 0;
        int column_end = n -1;
        int count = 1;
        vector<vector<int>> mat(n, vector<int>(n));

        while(row_start <= row_end  &&  column_start <= column_end){
            for(int i = column_start; i <= column_end; i++){
               mat[row_start][i] = count++; 
            }
            for (int i = row_start + 1; i <= row_end; i++){
                mat[i][column_end] = count++;
            }
            for(int i = column_end - 1; i >= column_start; i--){
                if(row_start == row_end) break;
                mat[row_end][i] = count++;
            } 
            for(int i = row_end - 1; i > row_start; i--){
                if(column_start == column_end) break;
                mat[i][column_start] = count++;
            }
            row_start++;
            row_end--;
            column_start++;
            column_end--;
        }
        return mat;
    }
};