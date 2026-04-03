// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int sum = 0;
        int n = 0;
        for(auto it: nums){
            freq[it]++;
        }
        for(auto &a : freq){
            if(a.second % k == 0){
                n = a.second / k;
                sum += (a.first*k)*n;
            }
        }
        return sum;
    }
};