// Time Complexity - O(n log n)
// Space Complexity -O(n)

// Medium
// Leetcode - https://leetcode.com/problems/top-k-frequent-words

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for (auto &w : words) {
            freq[w]++;
        }
        vector<pair<string,int>> v(freq.begin(),freq.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.second == b.second) 
                return a.first < b.first;  
            return a.second > b.second;    
        });
        vector<string> result;
        for (int i = 0; i < k; i++) {
            result.push_back(v[i].first);
        }
        return result;
    }
};