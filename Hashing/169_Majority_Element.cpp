//Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

    for (auto num:nums) {
        freq[num]++;
    }
    for(auto &p:freq){
         if(p.second>nums.size()/2){
            return p.first;
        }
    }
    return -1;
    }
};