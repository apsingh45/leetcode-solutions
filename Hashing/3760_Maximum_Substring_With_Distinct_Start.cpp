// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/maximum-substrings-with-distinct-start

class Solution {
public:
    int maxDistinct(string s) {
        set<char>happy;
        for(char c : s){
            happy.insert(c);
        }
        return happy.size();
    }
};