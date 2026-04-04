// Time Complexity - O(n)
//Space Complexity - O(n)

// Medium 
// Leetcode - https://leetcode.com/problems/decode-the-slanted-ciphertext

class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int col = encodedText.size()/rows;
        vector<vector<char>> encoded(rows,vector<char>(col,' '));

        int a = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < col; j++) {
                encoded[i][j] = encodedText[a++];
            }
        }

        string ans = "";
        for (int j = 0;j < col;j++){
            int i = 0;
            int k = j;
            while(i < rows && k < col){
                ans += encoded[i][k];
                i++;
                k++;
            }
        }
        while(!ans.empty() && ans.back() ==' '){
            ans.pop_back();
        }
        return ans;
    }
};
