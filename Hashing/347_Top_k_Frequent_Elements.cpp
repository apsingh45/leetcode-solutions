// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        unordered_map<int, int> freq; 
        for (int x : nums) {
            freq[x]++;  
        }
        priority_queue<pair<int,int>> pq;
        for(auto &entry : freq) {
            pq.push({entry.second, entry.first}); 
        }
        while(k > 0 && !pq.empty()) {
            auto [f, val] = pq.top();
            result.push_back(val);
            pq.pop();
            k--;
        }
        return result;
    }
};