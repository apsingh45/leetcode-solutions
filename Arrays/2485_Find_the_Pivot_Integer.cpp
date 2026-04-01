// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/find-the-pivot-integer

class Solution {
public:
    int pivotInteger(int n) {
        vector<int> nums;
        vector<int> sum;
        int a = 0;

        for(int i = 0; i < n; i++){
            nums.push_back(i + 1);
            a += nums[i];
            sum.push_back(a);
        }

        int total = sum[n - 1];

        for(int i = 0; i < n; i++){
            int left = sum[i];
            int right = total - sum[i] + nums[i];

            if(left == right){
                return nums[i];
            }
        }
        return -1;
    }
};
