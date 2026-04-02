// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/count-covered-buildings

class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& b) {
        unordered_map<int, vector<int>> rows;
        unordered_map<int, vector<int>> cols;
        for (auto &p : b) {
            rows[p[1]].push_back(p[0]);
            cols[p[0]].push_back(p[1]);
        }
        for (auto &r : rows) sort(r.second.begin(), r.second.end());
        for (auto &c : cols) sort(c.second.begin(), c.second.end());

        int count = 0;
        for (auto &p : b) {
            int x = p[0], y = p[1];

            auto &row = rows[y];
            auto &col = cols[x];

            bool left  = *row.begin() < x;
            bool right = *(row.end()-1) > x;

            bool down  = *col.begin() < y;
            bool up    = *(col.end()-1) > y;

            if (left && right && up && down)
                count++;
        }

        return count;
    }
};