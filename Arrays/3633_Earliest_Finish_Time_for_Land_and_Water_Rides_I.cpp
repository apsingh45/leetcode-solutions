// Time Complexity - O(N x M)
// Space Complexity = O(1)

// Easy
// Leetcode - https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration){
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int ans = INT_MAX;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int x = landStartTime[i] + landDuration[i];
                int y = waterStartTime[j] + waterDuration[j];

                if(x <= waterStartTime[j]){
                    ans = min(ans,y);
                }
                else{
                    ans = min(ans, x+waterDuration[j]);
                }

                if(y <= landStartTime[i]){
                    ans = min(ans,x);
                }
                else{
                    ans = min(ans, y+landDuration[i]);
                }
            }
        }
        return ans;
    }
};