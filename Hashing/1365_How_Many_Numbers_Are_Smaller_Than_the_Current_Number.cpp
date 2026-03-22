// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Easy
// Leecode - https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> numsc(nums.begin(), nums.end());
        sort(numsc.begin(), numsc.end());
        unordered_map<int, int> map;
        for (int i = 0; i < numsc.size(); i++) {
            if (map.find(numsc[i]) == map.end()) { 
                map[numsc[i]] = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = map[nums[i]];
        }
        return nums;
    }
};