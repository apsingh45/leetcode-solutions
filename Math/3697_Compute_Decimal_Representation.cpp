// Time Complexity - O(log n)
// Space Complexity - O(log n)

// Easy
// Leetcode - https://leetcode.com/problems/compute-decimal-representation

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> result;
        long digit = 1;
        while(n > 0){
            int cur_num = n % 10 * digit;
            if(cur_num != 0) result.push_back(cur_num);
            digit *= 10;
            n /= 10;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};