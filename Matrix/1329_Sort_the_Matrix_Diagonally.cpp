// Time Complexity - (N^2 log N)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/sort-the-matrix-diagonally

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        for(int k = 1;k<m;k++){
            int j = k;
            int i = 0;
            vector<int>temp;
            while(i < n && j < m){
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }

            j = k;
            i = 0;
            int a = 0;
            sort(temp.begin(),temp.end());
            while(i < n && j < m){
                mat[i][j] = temp[a];
                i++;
                j++;
                a++;
            }
        }

        for(int k = 0;k<n;k++){
            int i = k;
            int j = 0;
            vector<int>temp;
            while(i < n && j < m){
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }

            i = k;
            j = 0;
            int a = 0;
            sort(temp.begin(),temp.end());
            while(i < n && j < m){
                mat[i][j] = temp[a];
                i++;
                j++;
                a++;
            }
        }
        return mat;
    }
};