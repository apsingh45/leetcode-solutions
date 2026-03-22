// Time Complexity - O(q * p)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>result;
        for(int i = 0;i<queries.size();i++){
            int a = queries[i][0];
            int b = queries[i][1];
            int r = queries[i][2];
            int count = 0;
            for(int j = 0;j<points.size();j++){
                int x = points[j][0];
                int y = points[j][1];

                if((pow((x-a),2)+pow((y-b),2)) <= pow(r,2)){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};