// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/minimum-absolute-difference

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>result;
        sort(arr.begin(),arr.end());
        int min_diff = abs(arr[1]-arr[0]);
        for(int i = 0;i<arr.size()-1;i++){
            min_diff = min(min_diff,abs(arr[i+1]-arr[i]));
        }

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == min_diff) {
                result.push_back({arr[i - 1], arr[i]});
            }
        }
        return result;
    }
};