// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int>result;
        set<int> s(nums.begin(),nums.end());
        vector<int> v(s.begin(),s.end());
        sort(v.begin(),v.end(),greater<int>());
        for(int i = 0;i<v.size()&& k>0;i++){
            result.push_back(v[i]);
            k--;
        } 
        return result;

    }
};