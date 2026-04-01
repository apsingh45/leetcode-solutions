// Time Complexity - O(n + m)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/bitwise-xor-of-all-pairings

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0;
        int xor2 = 0;
        if(nums1.size() % 2 != 0){
            for(int i = 0; i < nums2.size();i++){
                xor1 ^= nums2[i];
            }
        }
        if(nums2.size() % 2 != 0){ 
            for(int i = 0; i < nums1.size();i++){
                xor2 ^= nums1[i];
            }
        } 
        return xor1 ^ xor2;
    }
};