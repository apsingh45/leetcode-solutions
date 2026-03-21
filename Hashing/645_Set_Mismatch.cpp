
// Time Complexity - O(n)
// Space Complexity -O(n)

// Easy
// Leetcode - https://leetcode.com/problems/set-mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto a : nums){
            freq[a]++;
        }

        int missing = 0;
        int duplicate = 0;
        for(int i = 1;i<=nums.size();i++){
            if(freq[i] == 0) missing = i;
            if(freq[i] == 2) duplicate = i; 
        }

        return {duplicate,missing};
    }
};