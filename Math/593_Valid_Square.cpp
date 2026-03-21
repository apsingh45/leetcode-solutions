// Time Complexity - O(1)
// Space Complexity -O(1)

// Medium
// Leetcode - https://leetcode.com/problems/valid-square

class Solution {
public:
    int distSq(vector<int>& a, vector<int>& b) {
        return (a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> d = {
            distSq(p1, p2), distSq(p1, p3), distSq(p1, p4),
            distSq(p2, p3), distSq(p2, p4), distSq(p3, p4)
        };
        sort(d.begin(), d.end());
        if(d[0] > 0 && d[0] == d[1] && d[1] == d[2] && d[2] == d[3] && d[4] == d[5] && d[4] == 2 * d[0])
        return 1;
        else return 0;
    }
};