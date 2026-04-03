// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/smallest-absent-positive-greater-than-average

class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i = 0; i< nums.size();i++){
            sum += nums[i];
        }
        float avg = sum / (float)nums.size();
        int ans = (int)avg + 1;
        if(ans <= 0) ans = 1;
        for(int i = 0; i< nums.size();i++){
            if(ans==nums[i]){
                ans++;
            }
        }
        return ans;
    }
};