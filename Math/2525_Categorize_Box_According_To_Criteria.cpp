// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/categorize-box-according-to-criteria

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume = 1LL * length * width * height;
        if( (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000) && mass >= 100 ) return "Both";

        else  if(length >= 10000 || width >= 10000 || height >= 10000 ||volume >= 1000000000) return "Bulky";

        else if(mass >= 100) return "Heavy";

        else return "Neither";
    } 
};