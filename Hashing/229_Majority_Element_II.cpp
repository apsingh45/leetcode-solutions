// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int>freq;
    for (auto num:nums) {
        freq[num]++;
    }
    vector<int>result;
    for(auto &p:freq){
        if(p.second>nums.size()/3){
            result.push_back(p.first);
        }
    }
    return result;
    }
};