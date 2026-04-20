// Time Complexity - O(n^2)
// Space Complexity - O(1)

// Easy 
// Leetcode - https://leetcode.com/problems/two-furthest-houses-with-different-colors

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max_dist = INT_MIN;
        for(int i = 0;i<colors.size();i++){
            for(int j = i+1;j<colors.size();j++){
                if(colors[i] != colors[j]) max_dist = max(max_dist,abs(i-j));
            }
        } 
        return max_dist;
    }
};