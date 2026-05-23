// Time Comlexity - O(N log N)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/maximum-number-of-coins-you-can-get

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());

        int n = piles.size();
        int a = n / 3;
        int i = 1;
        int ans = 0;

        for(int j = 1;j<=a;j++){
            ans += piles[i];
            i += 2;
        }

        return ans;
    }
};