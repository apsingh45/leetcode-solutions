// Time Complexity - O(N^2)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/number-of-centered-subarrays

class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            int sum = 0;
            unordered_set<int>s;
            for(int j = i;j<nums.size();j++){
                sum += nums[j];
                s.insert(nums[j]);
                if(s.count(sum)) ans++;
            }
        }
        return ans;
    }
};