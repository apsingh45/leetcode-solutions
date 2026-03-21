// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/k-closest-points-to-origin

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> result;
        vector<pair<int,int>> dist;
        for(int i = 0; i < points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];
            int d = x*x + y*y;
            dist.push_back({d, i});
        }
        sort(dist.begin(), dist.end(), [](auto &a, auto &b) {
            return a.first < b.first;
        });
        for(int i = 0; i < k; i++){
            result.push_back(points[dist[i].second]);
        }

        return result;
    }
};