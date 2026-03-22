// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/minimum-time-to-make-rope-colorful

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int time = 0;
        for (int i = 1; i < colors.size(); i++){
            if (colors[i] == colors[i-1]){
                time += min(neededTime[i], neededTime[i - 1]);
                if (neededTime[i] < neededTime[i - 1])
                    neededTime[i] = neededTime[i - 1];
            }
        }
        
        return time;
    }
};