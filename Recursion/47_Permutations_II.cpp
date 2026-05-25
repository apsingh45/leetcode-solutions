// Time Complexity - O(N!*N)
// Space Complexity - O(N!*N)

// Medium 
// Leetcode - https://leetcode.com/problems/permutations-ii

class Solution {
public:
    vector<vector<int>> ans;
    void permutation(vector<int>nums,vector<int>curr){
        int n = nums.size();
        if(n == 0){
            ans.push_back(curr);
            return;
        }

        for(int i = 0;i<n;i++){
            int a = nums[i];
            vector<int> newNums = nums;
            newNums.erase(newNums.begin() + i);
            vector<int>newCurr = curr;
            newCurr.push_back(a);
            permutation(newNums,newCurr);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>curr;
        permutation(nums,curr);

        sort(ans.begin(),ans.end());
        vector<vector<int>>result;
        result.push_back(ans[0]);
        for(int i = 1;i<ans.size();i++){
            if(ans[i-1] != ans[i]){
                result.push_back(ans[i]);
            }
        }

        return result;
    }
};