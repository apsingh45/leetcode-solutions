// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/alternating-digit-sum

class Solution {
public:
    int alternateDigitSum(int n) {
        string str_num = to_string(n);
        int sum = str_num[0] - '0'; 
        for (int i = 1; i < str_num.size(); i++) {
            int digit = str_num[i] - '0';
            if (i % 2 == 0) {
                sum += digit;
            } 
            else {
                sum -= digit;
            }
        }
        return sum;
    }
};