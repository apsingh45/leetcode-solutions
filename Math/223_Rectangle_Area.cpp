//Time Complexity - O(1)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/rectangle-area

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
       long long area1 = (ax2 - ax1) * (ay2 - ay1);
       long long area2 = (bx2 - bx1) * (by2 - by1);
       long long total_area = area1 + area2;
       int overlapWidth = min(ax2,bx2) - max(ax1,bx1);
       int overlapHeight = min(ay2,by2) - max(ay1,by1);
       long long overlapArea = 0;
       if(overlapWidth > 0 && overlapHeight > 0) {
            overlapArea = overlapWidth * overlapHeight;
        }
        return total_area - overlapArea;
    }
};