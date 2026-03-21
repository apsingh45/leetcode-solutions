// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int rem = 0;
        int result = 0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            rem = ((sum % k)+k) % k;
            if(m.find(rem) != m.end()){
                result += m[rem]; 
            }
            m[rem]++;
        }
        return result;
    }
};