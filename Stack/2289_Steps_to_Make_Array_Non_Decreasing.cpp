// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/steps-to-make-array-non-decreasing

class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n = nums.size();
        stack<pair<int,int>> st; 
        int ans = 0;

        for(int i = 0; i < n; i++){
            int currSteps = 0;

            while(!st.empty() && nums[i] >= st.top().first){
                currSteps = max(currSteps, st.top().second);
                st.pop();
            }

            if(!st.empty()){
                currSteps += 1;
            } else {
                currSteps = 0;
            }

            ans = max(ans, currSteps);
            st.push({nums[i], currSteps});
        }

        return ans;
    }
};