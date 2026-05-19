// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/find-the-score-difference-in-a-game

class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int score_A = 0;
        int score_B = 0;

        bool active_A = true;
        bool active_B = false;

        for(int i = 0;i<nums.size();i++){
            if(nums[i] % 2 != 0 && active_A){
                active_A = false;
                active_B = true;
            }

            else if(nums[i] % 2 != 0 && active_B){
                active_B = false;
                active_A = true;
            }

            if(i % 6 == 5) swap(active_A, active_B);

            if(active_A) score_A += nums[i];
            if(active_B) score_B += nums[i];

        }
        return (score_A - score_B);
    }
};