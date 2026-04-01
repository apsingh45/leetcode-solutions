// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/count-the-digits-that-divide-a-number

class Solution {
public:
    int countDigits(int num) {
        if (num <= 9 && num > 0) return 1;
        int count = 0;
        int temp = num;
        while (num > 0){
            int ld = num % 10;
            if (ld != 0 && temp % ld== 0) count++;
            num=num/10;
        }
        return count;
    }
};