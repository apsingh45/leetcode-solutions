// Time Complexity - O(n^3)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int min_dis = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                for(int k = j+1;k<nums.size();k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k]){
                        min_dis = min((abs(i - j) + abs(j - k) + abs(k - i)),min_dis);
                    }
                }
            }
        }

        if(min_dis == INT_MAX){
            return -1;
        }

        else return min_dis;
    }
};