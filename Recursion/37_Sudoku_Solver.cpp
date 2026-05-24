// Time Complexity - O(9^(n*n))
// Space Complexity - O(m) , m = 81

// Medium
// Leetcode - 

class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char ch){

        for(int j = 0; j < 9; j++){
            if(board[row][j] == ch) return false;
        }

        for(int i = 0; i < 9; i++){
            if(board[i][col] == ch) return false;
        }

        int startRow = (row/3)*3;
        int startCol = (col/3)*3;

        for(int i = startRow; i < startRow + 3; i++){
            for(int j = startCol; j < startCol + 3; j++){
                if(board[i][j] == ch) return false;
            }
        }
        return true;
    }

    bool solver(vector<vector<char>>& board, int row, int col){
        if(row == 9) return true;

        int nextRow = row, nextCol = col + 1;
        if(col == 8){
            nextRow = row + 1;
            nextCol = 0;
        }

        if(board[row][col] != '.'){
            return solver(board, nextRow, nextCol);
        }

        for(int i = 0; i < 9; i++){
            char ch = i + '1';

            if(isSafe(board, row, col, ch)){
                board[row][col] = ch;

                if(solver(board, nextRow, nextCol))
                    return true;

                board[row][col] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solver(board, 0, 0);
    }
};