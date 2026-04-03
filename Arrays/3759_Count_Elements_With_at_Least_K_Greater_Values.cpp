// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/count-elements-with-at-least-k-greater-values

class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int result = 0;
        int n = nums.size();
        for(int i = 0;i<n;){
            int val = nums[i];
            int idx = upper_bound(nums.begin(), nums.end(), val) - nums.begin();
            int gc = n - idx;
            int freq = idx - i;
            if(gc >= k)result+=freq;

            i = idx;
        }
        return result;
    }
};