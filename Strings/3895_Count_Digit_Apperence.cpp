// Time Complexity - O(N^2)
// Space Complexity -O(1)

// Medium
// Leetcode - https://leetcode.com/problems/count-digit-appearances

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        char d = digit + '0';
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            string s = to_string(nums[i]);
            for(int j = 0;j < s.size();j++){
                if(s[j] == d) count++;
            }
        }

        return count;
    }
};