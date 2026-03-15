//Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/number-of-1-bits

class Solution {
public:
    string toBinary(int n) {
    string binary = "";
    if (n == 0) return "0";
    while (n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }
    return binary;
}
    int hammingWeight(int n) {
        string s = toBinary(n);
        int count = 0;
        for(int i = 0 ; i < s.size();i++){
            if(s[i] == '1'){
                count++;
            }
        }
        return count;
    }
};