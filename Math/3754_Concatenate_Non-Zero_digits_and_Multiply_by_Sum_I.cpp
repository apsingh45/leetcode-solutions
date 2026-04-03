// Time Complexity - O(log n)
// Space Complexity - O(log n)

// Easy
// Leetcode - https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i

class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0) return 0;
        string s = to_string(n);
        string a = "";
        long long sum = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] != '0'){
                a += s[i];
            }
            sum += s[i]-'0';
        }
        return stoll(a)*sum;
    }
};