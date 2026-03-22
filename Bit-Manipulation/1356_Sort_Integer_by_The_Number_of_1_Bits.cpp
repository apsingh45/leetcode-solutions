// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Easy
// Leecode - https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits

class Solution {
public:
    int count_ones(int n){
       return __builtin_popcount(n);
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>result;
        map<int, vector<int>> mp;

        for(int i = 0;i<arr.size();i++){
            mp[count_ones(arr[i])].push_back(arr[i]);
        }
        for(auto &it : mp){
            sort(it.second.begin(),it.second.end());
        }
        for(auto &it : mp){
            vector<int> v = it.second;
            result.insert(result.end(),v.begin(),v.end());
        }
        return result;
    }
};