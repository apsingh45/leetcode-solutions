// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/first-element-with-unique-frequency

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;

        for(int i = 0;i<nums.size();i++){
            mp1[nums[i]]++;
        }

        for(auto &a : mp1){
            mp2[a.second]++;
        }

        for(int i = 0;i<nums.size();i++){
            if(mp2[mp1[nums[i]]] == 1) return nums[i];
        }

        return -1;
    }
};