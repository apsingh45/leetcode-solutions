// Time Complexity - O(log n)
// Space Complexity -O(log n)

// Easy
// Leetcode - https://leetcode.com/problems/binary-number-with-alternating-bits

class Solution {
public:
    string binary(int n){
        string s = "";
        while(n){
            s += (n%2) + '0';
            n = n/2;
        }
        return s;
    }
    bool hasAlternatingBits(int n) {
        string s = binary(n);

        for(int i = 0;i < s.size()-1;i++){
            if(s[i] == '0' && s[i+1] == '0' || s[i] == '1' && s[i+1] == '1'){
                return false;
            }
        }
        return true;
    }
};