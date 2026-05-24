// Time Complexity - O(N!)
// Space Complexity - O(N^2)

// Medium
// Leetcode - https://leetcode.com/problems/n-queens-ii

class Solution {
public:
    vector<vector<string>>ans;

    bool isSafe(vector<string>&board,int row,int col){
        int n = board.size();

        for(int i = 0;i<n;i++){
            if(board[row][i] == 'Q') return false;
        }

        for(int i = 0;i<row;i++){
            if(board[i][col] == 'Q') return false;
        }

        for(int i = row,j=col ; i>=0 && j>=0;i--,j--){
            if(board[i][j] == 'Q') return false;
        }

        for(int i = row,j = col; i >= 0 && j < n;i--,j++){
            if(board[i][j] == 'Q') return false;
        }

        return true;
    }
    void nQueens(vector<string>&board,int row){
        int n = board.size();

        if(row == n){
            ans.push_back(board);
            return;
        }

        for(int j = 0;j<n;j++){
            if(isSafe(board,row,j)){
                board[row][j] = 'Q';
                nQueens(board,row + 1);
                board[row][j] = '.';
            }
        }
    }
    int totalNQueens(int n) {
         vector<string>board;
        for(int i = 0;i<n;i++){
            string a = "";
            for(int j = 0;j<n;j++){
                a += '.';
            }
            board.push_back(a);
        }
        nQueens(board,0);
        int a = ans.size();
        return a;
    }
};