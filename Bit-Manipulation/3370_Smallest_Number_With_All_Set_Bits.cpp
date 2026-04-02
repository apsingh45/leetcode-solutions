// Time Complexity - O(log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/smallest-number-with-all-set-bits

class Solution {
public:
    int smallestNumber(int n) {
        string s = "" ;
        while(n > 0){
            s = to_string(n%2) + s;
            n = n/2; 
        }
        for(int i = 0;i < s.size();i++){
            if(s[i] == '0') s[i] = '1';
        }
        int a = stoi(s,nullptr,2);
        return a;
    }
};