// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy 
// Leetcode - https://leetcode.com/problems/smallest-index-with-equal-value

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            if(i%10 == nums[i]){
                return i;
            }
        }
        return -1;
    }
};