// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers

class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(int i = 0;i < n.size();i++){
            ans = max(ans,(n[i]-'0'));
        }
        return ans;
        
    }
};