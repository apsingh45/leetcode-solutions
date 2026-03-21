// Time Complexity - O(n)
// Space Complexity -O(n)

// Medium
// Leetcode - https://leetcode.com/problems/contiguous-array

class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        for(int &a : nums){
            if(a == 0){
                a = -1;
            }
        }

        unordered_map<int,int> mp;
        mp[0] = -1;

        int curr_sum = 0;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            curr_sum += nums[i];

            if(mp.find(curr_sum) != mp.end()){
                ans = max(ans, i - mp[curr_sum]);
            }
            else{
                mp[curr_sum] = i;
            }
        }
        return ans;
    }
};