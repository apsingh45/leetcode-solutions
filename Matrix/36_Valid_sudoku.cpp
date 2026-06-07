// Time Complexity - O(1)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/valid-sudoku

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // vectical
        for(int j = 0;j<9;j++){
            vector<int>v(10,0);
            for(int i = 0;i<9;i++){
                char ch = board[i][j];
                if(ch != '.') v[ch-'0']++;
            }

            for(int k = 0;k<10;k++){
                if(v[k] > 1) return false;
            }
        }

        // horizontal
        for(int i = 0;i<9;i++){
            vector<int>v(10,0);
            for(int j = 0;j<9;j++){
                char ch = board[i][j];
                if(ch != '.') v[ch-'0']++;
            }

            for(int k = 0;k<10;k++){
                if(v[k] > 1) return false;
            }
        }

        // 3x3 grid
        for(int i = 0;i<9;i+=3){
            for(int j = 0;j<9;j+=3){
                vector<int>v(10,0);

                for(int a = i;a<i+3;a++){
                    for(int b = j;b<j+3;b++){
                        char ch = board[a][b];
                        if(ch != '.') v[ch-'0']++;
                    }
                }

                for(int k = 0;k<10;k++){
                    if(v[k] > 1) return false;
                }
            }
        }

        return true;
    }
};