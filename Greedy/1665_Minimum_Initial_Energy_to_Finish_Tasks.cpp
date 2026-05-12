// Time Complexity - O(N log N)
// Space Complexity - O(1)

// Hard 
// Leetcode - https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks

class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        
        sort(tasks.begin(),tasks.end(),[&](vector<int>&a,vector<int>&b){
            return (a[1]-a[0]) > (b[1]-b[0]);
        });

        int ans = 0;
        int curr_energy = 0;

        for(int i = 0;i<tasks.size();i++){
            int actual_energy = tasks[i][0];
            int min_energy = tasks[i][1];

            if(curr_energy < min_energy){
                ans += (min_energy - curr_energy);
                curr_energy = min_energy;
            }
            curr_energy -= actual_energy;
        }
        return ans;
    }
};