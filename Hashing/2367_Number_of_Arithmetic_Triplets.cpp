// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/number-of-arithmetic-triplets

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        unordered_map<int,int>map;
        for(int i = 0; i<nums.size();i++){
            map[nums[i]] = i;
        }
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[j]-nums[i]==diff && map.find(diff+nums[j])!=map.end()) count++;
            }
        }
        return count;
    }
};