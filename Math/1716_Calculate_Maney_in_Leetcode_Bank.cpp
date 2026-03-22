// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/calculate-money-in-leetcode-bank

class Solution {
public:
    int totalMoney(int n) {
        int a = 0;
        int count = 0;
        int total_money = 0;
        for(int i = 1 ;i<=n;i++){
            total_money = total_money + a + i;
            count++;
            if(count ==  7){
                count = 0;
                a -= 6;
            }
        }
        return total_money;
    }
};