// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end

class Solution {
public:
    int maxOperations(string s) {
        int ones = 0;
        int ans = 0;
        for(int i = 0;i<s.size()-1;i++){
            if(s[i] == '1'){
                ones++;
            }
            if(s[i] == '1' && s[i+1] == '0'){
                ans += ones;
            }
        }
        return ans;
    }
};