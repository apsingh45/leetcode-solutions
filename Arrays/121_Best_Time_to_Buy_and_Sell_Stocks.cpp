// Time Complexity - O(n)
// Space Complexity -O(1)

// Easy
// LeetCode - https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        for(int price : prices){
            min_price = min(min_price , price);
            max_profit = max(max_profit, price - min_price);
        }
        return max_profit;
    }
};