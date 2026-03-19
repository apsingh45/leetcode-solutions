// Time complexity - O(log n)
// Space Complexity -O(log n)

// Easy
// Leetcode - https://leetcode.com/problems/number-complement

class Solution {
public:
    string intToBinary(int n){
        if(n == 0) return "0";
        string s = "";
        while(n > 0){
            s = char((n % 2) + '0') + s;
            n /= 2;
        }
        return s;
    }
    int findComplement(int num) {
        string s = intToBinary(num);

        for(int i = 0;i<s.size();i++){
            if(s[i] == '1') s[i] = '0';
            else s[i] = '1';
        }

        return stoi(s,0,2);
    }
};