// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/find-missing-elements

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>result;
        sort(nums.begin(),nums.end());
        int start = nums[0];
        int end= nums[nums.size()-1]; 
        set<int>s(nums.begin(),nums.end());
        for(int i = start;i <= end;i++){
            if(s.find(i) == s.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};