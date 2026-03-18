// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/find-all-duplicates-in-an-array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        sort(nums.begin(),nums.end());
        map<int, int> freq;
        for(int num : nums) {
            freq[num]++; 
        }
         for (auto it : freq) {
            if(it.second>1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};