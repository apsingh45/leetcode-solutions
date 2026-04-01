// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/distribute-money-to-maximum-children

class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children) return -1;
        money = money - children;
        int eight = min(money / 7, children);
        int rem = money - eight * 7;

        if (eight == children && rem > 0) return eight - 1;  
        if (eight == children - 1 && rem == 3) return eight - 1; 
        return eight;
    }
};