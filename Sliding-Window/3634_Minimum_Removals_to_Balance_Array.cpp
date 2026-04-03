// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/minimum-removals-to-balance-array

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {  
        sort(nums.begin(),nums.end()); 
        int i = 0;
        int j = 0;
        int count = INT_MAX;
        for(int a = i;i<nums.size();i++){
            long long ab = 1LL * k * nums[i];
            while(j < nums.size() && nums[j] <= ab ){
                j++;
            }

            int ans = nums.size()-(j-i+1);
            count = min(ans,count);
        }
        return count + 1;
    }
};