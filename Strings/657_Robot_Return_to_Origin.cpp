// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy 
// Leetcode - https://leetcode.com/problems/robot-return-to-origin

class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 1;
        int down = -1;
        int left = -2;
        int right = 2;

        int x = 0;
        int y = 0;

        for(int i = 0;i<moves.size();i++){
            if(moves[i] == 'U') y += up;
            if(moves[i] == 'D') y += down;
            if(moves[i] == 'L') x += left;
            if(moves[i] == 'R') x += right; 
        }
        
        return x == 0 && y == 0;
    }
};