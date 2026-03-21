// Time Complexity - O(n)
// Space Complexity -O(n)

// Easy
// Leetcode - https://leetcode.com/problems/n-repeated-element-in-size-2n-array

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> s;
        for (int x : nums) {
            if (s.count(x)) return x;
            s.insert(x);
        }
        return -1;
    }
};