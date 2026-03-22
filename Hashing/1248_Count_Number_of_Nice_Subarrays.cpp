// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/count-number-of-nice-subarrays

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] % 2 == 0){
                nums[i] = 0;
            }
            else nums[i] = 1;
        }

        unordered_map<int,int>map;
        map[0] = 1;
        for(int i = 0 ; i < nums.size();i++){
            sum += nums[i];
            if(map.find(sum - k) != map.end()){
                count = count +  map[sum-k];
            }
            map[sum]++;
        }
        return count;
    }
};