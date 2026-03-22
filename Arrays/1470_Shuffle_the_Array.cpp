// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leecode - https://leetcode.com/problems/shuffle-the-array

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x;
        vector<int>y;
        vector<int>result;
        for(int i = 0;i < n;i++){
            x.push_back(nums[i]);
            y.push_back(nums[n+i]);
        }
        for(int i = 0; i < n ; i++){
            result.push_back(x[i]);
            result.push_back(y[i]);
        }
        return result;
    }
};