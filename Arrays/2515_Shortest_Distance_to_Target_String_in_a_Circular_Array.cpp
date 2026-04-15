// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                int a = abs(i - startIndex);
                ans = min(ans, min(a, n-a));
            }
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};