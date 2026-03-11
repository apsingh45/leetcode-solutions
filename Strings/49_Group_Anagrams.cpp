// Time Complexity - O(n * k log k)
// Space Complexity - O(n * k)

// Medium
// Leetcode - https://leetcode.com/problems/group-anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> map;
        for(auto i : strs){
            string temp = i;
            sort(temp.begin() , temp.end());
            map[temp].push_back(i);
        }
        vector<vector<string>> result;
        for(auto &i : map){
            result.push_back(i.second);
        }
        return result;
    }
};