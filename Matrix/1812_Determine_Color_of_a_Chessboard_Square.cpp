// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/determine-color-of-a-chessboard-square/description/

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = (int)coordinates[0];
        int b = (int)coordinates[1];
        if(a%2 == 1){
            return !(b%2);
        }
        return(b%2);
        
    }
};