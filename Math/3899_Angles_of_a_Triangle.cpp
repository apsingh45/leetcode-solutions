// Time Complecity - O(1)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/angles-of-a-triangle

class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(),sides.end());
        vector<double>ans;

        int a = sides[0];
        int b = sides[1];
        int c = sides[2];

        if((a+b) <= c) return ans;

        double a1 = acos((b*b + c*c - a*a) / (2.0*b*c));
        double a2 = acos((a*a + c*c - b*b) / (2.0*a*c));
        double a3 = acos((a*a + b*b - c*c) / (2.0*a*b));

        a1 = a1 * 180.0 / M_PI;
        a2 = a2 * 180.0 / M_PI;
        a3 = a3 * 180.0 / M_PI;

        ans.push_back(a1);
        ans.push_back(a2);
        ans.push_back(a3);

        return ans;
    }
};