// Time Complexity - O(n)
// Space Complexity - O(1) 

// Hard
// Leetcode - https://leetcode.com/problems/count-subarrays-with-score-less-than-k

class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long count = 0;
        int i = 0;
        int j = 0;

        long long curr_sum = 0;
        long long curr_prod = 1;

        int n = nums.size();

        while(i<n && j<n){
            curr_sum += nums[j];
            curr_prod = curr_sum * (j-i+1);

            if(curr_prod < k){
                count += (j-i+1);
                j++;
            }
            else{
                while(i <= j && curr_sum * (j-i+1) >= k){
                    curr_sum -= nums[i];
                    i++;
                }
                count += (j - i + 1);
                j++;
            }
        }
        return count;
    }
};