// Time Complexity - O(n)
// Space Complexity -O(1)

// Easy
// Leetcode - https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;
        for(int i = 0;i<k;i++){
            sum += nums[i];
        }

        double avg = sum/k;
        for(int i = k ; i<nums.size();i++){
            sum = sum + nums[i] - nums[i-k];
            avg = max(avg,sum/k);
        }

        return avg;
    }
};