// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/find-closest-person

class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(z-x)==abs(z-y)) return 0;
        else if(abs(z-x)<=abs(z-y)) return 1;
        return 2;
    }
};