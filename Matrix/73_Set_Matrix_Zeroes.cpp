// Time Complexity - O(n x m)
// Space Complexity - O(n + m)

// Medium
// Leetcode - https://leetcode.com/problems/set-matrix-zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> column;
        set<int> row;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i=0;i<n;i++){
            for(int j = 0;j < m;j++){
                if(matrix[i][j] == 0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        for(int i = 0;i < n;i++){
            if(row.find(i) != row.end()){
                int temp = m-1;
                while(temp >= 0){
                    matrix[i][temp] = 0;
                    temp--;
                }
            }
        }
        for(int j = 0 ; j < m;j++){
            if(column.find(j) != column.end()){
                int temp1 = n-1;
                while(temp1 >= 0){
                    matrix[temp1][j] = 0;
                    temp1--;
                }
            }
        }
    }
};