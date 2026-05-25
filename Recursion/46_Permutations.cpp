// Time Complexity - O(N!*N)
// Space Complexity - O(N!*N)

// Medium 
// Leetcode - https://leetcode.com/problems/permutations

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

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>curr;
        permutation(nums,curr);
        return ans;
    }
};