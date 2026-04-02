// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>freq;
        for(auto it : nums){
            freq[it]++;
        } 
        for(auto &a : freq){
            if(a.second ==  2){
                result.push_back(a.first);
            }
        }
        return result;
    }
};