// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Hard
// Leetcode - https://leetcode.com/problems/first-missing-positive/description/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); ) {
            if (nums[i] < 1) {
                nums.erase(nums.begin() + i);
            }
            else {
                i++; 
            }
        }
        int num = 1;
       for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == num) {
                num++;
                continue; 
            }
            else if (nums[i] > num) {
                return num;
            }
        }
        return num;
    }
};