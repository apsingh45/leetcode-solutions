// Time Complexity - O(n^2)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digit_sum = 0;
        int element_sum = 0;
        int sum = 0;
        int element = 0;
        for( int i = 0; i < nums.size(); i++) {
            element_sum += nums[i];
            element = nums[i];
            sum=0;
            if(element > 9) {
                while(element > 0){
                    sum += element % 10;
                    element = element / 10;
                }
                digit_sum += sum;
            }
            else {
                digit_sum += nums[i];
                }
        }
        return abs(digit_sum - element_sum);
    }
};