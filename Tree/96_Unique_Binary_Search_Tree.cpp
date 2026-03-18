// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/unique-binary-search-trees

class Solution {
public:
    int numTrees(int n) {
        long long ans = 1;
        for(int i = 1;i<n;i++){
            ans = ans*2*(2*i + 1)/(i+2);
        }
        return ans;
    }
};