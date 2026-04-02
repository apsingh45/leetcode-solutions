// Time Complexity - O(n^2)
// Space Complexity - O(1)

// Easy
// Leetcode -https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i


class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k){
            int minimum = INT_MAX;
            int min_index = 0;
            for(int i = 0;i<nums.size();i++){
                if(minimum > nums[i]){
                    minimum = nums[i];
                    min_index = i;
                }
            }

            nums[min_index] = nums[min_index] * multiplier;
            k--;
        }

        return nums;
    }
};