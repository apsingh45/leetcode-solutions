// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/climbing-stairs-ii

class Solution
{
public:
    int helper(int idx, vector<int> &costs, vector<int> &dp)
    {
        if (idx == 0)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int i1 = INT_MAX;
        if (idx >= 1)
            i1 = helper((idx - 1), costs, dp) + costs[idx - 1] + 1;

        int i2 = INT_MAX;

        if (idx >= 2)
            i2 = helper((idx - 2), costs, dp) + costs[idx - 1] + 4;

        int i3 = INT_MAX;

        if (idx >= 3)
            i3 = helper((idx - 3), costs, dp) + costs[idx - 1] + 9;

        return dp[idx] = min(i1, min(i2, i3));
    }

    int climbStairs(int n, vector<int> &costs)
    {
        vector<int> dp(n + 1, -1);

        return helper(n, costs, dp);
    }
};