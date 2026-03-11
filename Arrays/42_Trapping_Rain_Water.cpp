// Time Complexity - O(n)
// Space Complexity - O(n)

// Hard
// Leetcode - https://leetcode.com/problems/trapping-rain-water

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>leftmax;
        vector<int>rightmax;
        int a = 0;
        int b = 0;
        for(int i = 0;i<height.size();i++){
            a = max(a,height[i]);
            leftmax.push_back(a);
        }

        for(int i = height.size()-1;i>=0;i--){
            b = max(b,height[i]);
            rightmax.push_back(b);
        }
        reverse(rightmax.begin(),rightmax.end());

        int ans = 0;
        for(int i = 1;i<height.size()-1;i++){
            if(height[i] < leftmax[i] && height[i] < rightmax[i]){
                ans += min(leftmax[i],rightmax[i]) - height[i];
            }
        }

        return ans;
    }
};