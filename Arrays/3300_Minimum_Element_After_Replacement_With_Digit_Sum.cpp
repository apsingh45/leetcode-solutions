// Time Complexity - O(N log N)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum

class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n > 0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int minimum = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            int a = digitSum(nums[i]);
            minimum = min(minimum , a);
            nums[i] = a;
        }
        return minimum;
    }
};