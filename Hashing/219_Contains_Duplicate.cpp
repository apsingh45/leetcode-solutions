//Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(int num : nums){
            umap[num]++;
            if(umap[num] != 1){
            return 1;
            }
        }
        return 0;
    }
};