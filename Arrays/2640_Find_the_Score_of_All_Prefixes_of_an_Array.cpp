// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums){
        vector<long long>result;
        int max_num = nums[0];
        for(int i = 0;i<nums.size();i++){
            max_num = max(max_num,nums[i]);
            result.push_back(nums[i] + max_num);
        } 
        for(int i = 1;i<result.size();i++){
            result[i] = result[i] + result[i-1];
        }
        return result;
    }
};