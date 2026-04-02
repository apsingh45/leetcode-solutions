// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        double avg = DBL_MAX;
        double a = 0;
        while(i <= j){
            a = (nums[i]+nums[j])/2.0;
            avg = min(avg,a);
            i++;
            j--;
        }
        return avg;
    }
};