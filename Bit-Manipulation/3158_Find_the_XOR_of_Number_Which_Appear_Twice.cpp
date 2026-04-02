// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int xor_ = 0;  
       for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                xor_ ^= nums[i];
            }
        }
        return xor_;
    }
};