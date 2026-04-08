// Time Complexity - O(Q.(N/A) + N)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/xor-after-range-multiplication-queries-i

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i = 0;i<queries.size();i++){
            int idx = queries[i][0];
            int j = queries[i][1];
            int a = queries[i][2];
            int v = queries[i][3];

            while(idx <= j){
                nums[idx] = (1LL * nums[idx] * v) % (1000000007);
                idx += a;
            }
        }

        int ans = nums[0];
        for(int i = 1;i<nums.size();i++){
            ans ^= nums[i];
        }

        return ans;
    }
};