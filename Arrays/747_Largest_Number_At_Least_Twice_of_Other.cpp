// Time Complexity - O(n log n)
// Space Complexity -O(n)

// Easy
// Leetcode - https://leetcode.com/problems/largest-number-at-least-twice-of-others

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>nuums;
        for(int i=0;i<nums.size();i++){
            nuums.push_back(nums[i]);
        }
        int ans = 0;
        sort(nuums.rbegin(),nuums.rend());
        if(nuums[0]/2 >= nuums[1]){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==nuums[0]){
                    ans=i;
                    break;
                }
            }
        }
        else{
            ans=-1;
        }
        return ans;
    }
};