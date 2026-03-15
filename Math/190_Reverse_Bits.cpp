//Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/reverse-bits

class Solution {
public:
    int reverseBits(int n) {
       string bits = "";
       int i = 0;
        while(n){
            bits += char((n % 2) + '0');
            n /= 2;
            i++;
        }
        while(i < 32){
            bits += '0';
            i++;
        }

        for(auto bit : bits){
            n = n * 2 + (bit - '0');
        }

        return n;
    }
};