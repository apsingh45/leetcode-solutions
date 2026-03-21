// Time Complexity - O(n)
// Space Complexity -O(1)

// Hard
// Leetcode - https://leetcode.com/problems/chalkboard-xor-game

class Solution {
public:
    bool xorGame(vector<int>& nums) {
        if(nums.size() % 2 == 0) return 1;
        int ans = 0;
        for(int a : nums){
            ans ^= a;
        }
        if(ans == 0) return 1;
        else return 0;
        }
};