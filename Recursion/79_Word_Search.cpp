// Time Complexity - O()
// Space Complexity - O()

// Medium 
// Leetcode - https://leetcode.com/problems/word-search

class Solution {
public:
    bool backtrack(vector<vector<char>>& board,int i,int j,int k,string word){
        int m = board.size();
        int n = board[0].size();
        if(k == word.size()) return true;
         
        if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[k]) return false;

        char a = board[i][j];
        board[i][j] = '@';

        if(backtrack(board,i+1,j,k+1,word) || backtrack(board,i-1,j,k+1,word) || backtrack(board,i,j+1,k+1,word) || backtrack(board,i,j-1,k+1,word)){
            return true;
        }

        board[i][j] = a;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                if(backtrack(board,i,j,0,word)) return true;
            }
        }

        return false;
    }
};