// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/left-and-right-sum-differences

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left;
        vector<int>right;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            left.push_back(sum);
            sum +=nums[i];
        }
        sum = 0;
        for(int i = nums.size()-1;i>=0;i--){
            right.push_back(sum);
            sum +=nums[i];
        }
        reverse(right.begin(),right.end());
        for(int i = 0;i<nums.size();i++){
            nums[i] = abs(right[i]-left[i]);
        }
        return nums;
    }
};