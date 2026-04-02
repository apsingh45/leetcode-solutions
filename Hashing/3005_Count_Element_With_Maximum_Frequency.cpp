// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/count-elements-with-maximum-frequency

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max_freq = 0;
        int count = 0;
        unordered_map<int,int>freq;
        for(auto num : nums){
            freq[num]++;
        }
        for(auto &a : freq){
            max_freq = max(max_freq, a.second);
        }
        for(auto &b : freq){
            if(b.second == max_freq) count += max_freq;
        }
        return count;
    }
};