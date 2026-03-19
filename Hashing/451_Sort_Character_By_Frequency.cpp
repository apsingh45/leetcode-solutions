// Time complexity - O(n)
// Space Complexity -O(n)

// Medium
// Leetcode - https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for (auto i : s){
            freq[i]++;
        }
        vector<pair<char,int>> vec(freq.begin(), freq.end());
        
        sort(vec.begin(), vec.end(), [](auto& a, auto& b){
            return a.second>b.second;
        });
        string res = "";
        for (auto& temp : vec){
            res = res + string(temp.second, temp.first);
        }
        return res;
    }
};