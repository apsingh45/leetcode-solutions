// Time Complexity - O(n + m)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(target <= matrix[0][n-1]){
            int a = matrix[0].size() - 1;
            while(a >= 0 ){
                if(target == matrix[0][a]) return true;
                a--;
            }
        }
        for(int i = 1; i < m;i++) {
            if(target <= matrix[i][n-1] && target > matrix[i-1][n-1]){
                int j = matrix[i].size() - 1;
                while(j >= 0 ){
                    if(target == matrix[i][j]) return true;
                    j--;
                }
            }
        }
        return false;
    }
};