// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/find-the-original-array-of-prefix-xor

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> result;
        result.push_back(pref[0]);
        for(int i = 1; i < pref.size(); i++){
            result.push_back(pref[i] ^ pref[i-1]);
        }
        
        return result;
    }
};