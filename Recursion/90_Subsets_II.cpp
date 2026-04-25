// Time Complexity - O(N*2^N)
// Space Complexity - O(N*2^N)

// Medium
//Leetcode - https://leetcode.com/problems/subsets-ii

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>temp;

        helper(0,nums,temp,result);
        set<vector<int>>s(result.begin(),result.end());
        vector<vector<int>>ans (s.begin(),s.end());
        return ans;
    }

    void helper(int i,vector<int>& nums,vector<int>& temp,vector<vector<int>>& result){
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