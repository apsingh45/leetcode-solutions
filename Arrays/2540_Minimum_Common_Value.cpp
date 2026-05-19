// Time Complexity - O(N)
// Space Complexity - O(N)

// Easy 
// Leetcode - https://leetcode.com/problems/minimum-common-value

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;

        for(int a : nums2) mp[a]++;

        for(int i = 0;i<nums1.size();i++){
            if(mp.find(nums1[i]) != mp.end()) return nums1[i];
        }
        return -1;
    }
};