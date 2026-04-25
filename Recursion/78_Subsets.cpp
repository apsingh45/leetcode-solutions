// Time Complexity - O(N∗2^N)
// Space Complexity - O(N)

// Medium
//Leetcode - https://leetcode.com/problems/subsets
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>>result;
        vector<int>temp;

        helper(0,nums,temp,result);
        return result;
    }
    void helper(int i, vector<int>& nums,vector<int>& temp,vector<vector<int>>& result){
        if(i == nums.size()){
            result.push_back(temp);
            return;
        }

        helper(i+1,nums,temp,result);

        temp.push_back(nums[i]);
        helper(i+1,nums,temp,result);
        temp.pop_back();
    }
};