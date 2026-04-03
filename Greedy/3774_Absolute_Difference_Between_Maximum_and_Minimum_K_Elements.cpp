// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements

class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a = 0;
        int b = 0;
        int n = nums.size()-1;
        for(int i = 0;i<k;i++){
            a += nums[n-i];
            b += nums[i];
        }
        return abs(a-b);
    }
};