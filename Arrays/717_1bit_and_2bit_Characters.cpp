// Time Complexity - O(n)
// Space Complexity -O(1)

// Easy
// Leetcode - https://leetcode.com/problems/1-bit-and-2-bit-characters/description/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            if (i == nums.size()-1){
                return true;
            }
            if(nums[i] == 1 &&(nums[i+1] == 0 || nums[i+1] == 1)){
                i++;
            }
        }
        return false;
    }
};