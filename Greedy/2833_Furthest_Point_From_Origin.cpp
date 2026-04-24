// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/furthest-point-from-origin

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L_count = 0;
        int R_count = 0;
        int __count = 0;

        for(char a : moves){
            if(a == 'L') L_count++;
            if(a == 'R') R_count++;
            if(a == '_') __count++;
        }

        if(L_count >= R_count) return ((L_count + __count) - R_count);
        else return ((R_count + __count) - L_count);
    }
};