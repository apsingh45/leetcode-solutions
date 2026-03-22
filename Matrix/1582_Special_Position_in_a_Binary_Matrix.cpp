// Time Complexity - O(n x m)
// Space Complexity - O(n + m)

// Easy
// Leecode - https://leetcode.com/problems/special-positions-in-a-binary-matrix

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int,bool>row;
        unordered_map<int,bool>col;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<n;i++){
            int a = 0;
            for(int j = 0;j<m;j++){
                if(mat[i][j] == 1) a++;
            }
            if(a == 1){
                row[i] = true;
            }
            else row[i] = false;
        }

        for(int i = 0;i<m;i++){
            int a = 0;
            for(int j = 0;j<n;j++){
                if(mat[j][i] == 1) a++;
            }
            if(a == 1){
                col[i] = true;
            }
            else col[i] = false;
        }

        int count = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j] == 1 && row[i] && col[j]) count++;
            }
        }

        return count;
    }
};
