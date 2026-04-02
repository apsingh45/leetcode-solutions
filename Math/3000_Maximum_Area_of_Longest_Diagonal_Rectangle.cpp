// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        if(dimensions.empty()) return 0;
        int max_diag = 0;
        int max_area = 0;
        for(int i = 0; i < dimensions.size(); i++){
            int w = dimensions[i][0];
            int h = dimensions[i][1];
            int diag= w*w + h*h;
            int area = w*h;
            if(diag > max_diag || (diag == max_diag && area > max_area)) {
                max_diag = diag;
                max_area = area;
            }
        }
        return max_area;
    }
};