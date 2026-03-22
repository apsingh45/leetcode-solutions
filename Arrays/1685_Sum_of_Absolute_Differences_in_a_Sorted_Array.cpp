// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leecode - https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>suffix;
        vector<int>prefix;
        int sum = 0;
        prefix.push_back(0);
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            prefix.push_back(sum);
        }
        sum = 0;
        for(int i = nums.size()-1;i>=0;i--){
            sum += nums[i];
            suffix.push_back(sum);
        }
        reverse(suffix.begin(),suffix.end());
        suffix.push_back(0);

        for(int i = 0;i<nums.size();i++){
            nums[i]=(nums[i]*i-prefix[i])+(suffix[i+1]-(nums[i]*(nums.size()-i-1)));
        }
        return nums;
    }
};