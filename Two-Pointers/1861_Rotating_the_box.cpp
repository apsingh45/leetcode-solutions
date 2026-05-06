// Time Complexity - O(m x n)
// Space Complexity - O(m x n)

// Medium 
// Leetcode - https://leetcode.com/problems/rotating-the-box

class Solution {
public:
    void helper(vector<char>& v){
        int n = v.size();
        int empty = n-1;

        for(int i = n-1;i >= 0;i--){
            if(v[i] == '*') empty = i - 1;
            else if(v[i] == '#'){
                swap(v[i],v[empty]);
                empty--;
            }
        }
    }
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();
        vector<vector<char>>result(n, vector<char>(m));

        for(int i = 0; i < m;i++){
            helper(boxGrid[i]);
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                result[j][m-1-i] = boxGrid[i][j];
            }
        }
        return result;
    }
};