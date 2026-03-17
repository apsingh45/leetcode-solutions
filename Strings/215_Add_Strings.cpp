// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/add-strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int s1 = num1.size();
        int s2 = num2.size();
        while (s1 < s2) {
            num1 = '0' + num1;
            s1++;
        }
        while (s2 < s1) {
            num2 = '0' + num2;
            s2++;
        }

        int carry = 0;
        for (int i = s1 - 1; i >= 0; i--) {
            int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
            carry = sum / 10;
            sum = sum % 10;
            result = char(sum + '0') + result;
        }
        if (carry != 0) {
            result = '1' + result;
        }

        return result;
    }
};