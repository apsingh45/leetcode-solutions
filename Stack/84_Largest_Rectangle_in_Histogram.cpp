// Time Complexity - O(N)
// Space Complexity -O(N)

// Hard
// Leetcode - https://leetcode.com/problems/largest-rectangle-in-histogram

class Solution {
public:
    vector<int> nextSmallerleft(vector<int>& heights){
        int n = heights.size();
        vector<int>nsl(n,0);
        stack<int> s;

        nsl[0] = -1;
        s.push(0);

        for(int i = 1;i<n;i++){
            int curr = heights[i];
            while(!s.empty() && curr <= heights[s.top()]){
                s.pop();
            }
            if(s.empty()) nsl[i] = -1;
            else nsl[i] = s.top();

            s.push(i);
        }
        return nsl;
    }

    vector<int> nextSmallerright(vector<int>& heights){
        int n = heights.size();
        vector<int>nsr(n,0);
        stack<int> s;

        nsr[n-1] = n;
        s.push(n-1);

        for(int i = n-2;i>=0;i--){
            int curr = heights[i];
            while(!s.empty() && curr <= heights[s.top()]){
                s.pop();
            }
            if(s.empty()) nsr[i] = n;
            else nsr[i] = s.top();

            s.push(i);
        }
        return nsr;
    }

    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        vector<int>nsl = nextSmallerleft(heights);
        vector<int>nsr = nextSmallerright(heights);

        for(int i = 0;i<heights.size();i++){
            int ht = heights[i];
            int width = nsr[i] - nsl[i] - 1;

            int area = ht * width;
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
};