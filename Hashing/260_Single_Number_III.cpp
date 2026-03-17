// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/single-number-iii

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>result;
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto &p : freq) {
            if(p.second == 1){
                result.push_back(p.first);
            }
        }
        return result;
    }
};