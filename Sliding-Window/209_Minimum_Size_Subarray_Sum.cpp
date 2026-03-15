//Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/minimum-size-subarray-sum/description/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0,j=0;
        int n = nums.size();
        int sum = 0;
        int size = INT_MAX;
        while(i < n){
            sum += nums[i];
            while(sum >= target){
                size = min(size,i-j+1);
                sum -= nums[j];
                j++;
            }
            i++;
        }
        return ((size == INT_MAX)?0:size);
    }
};