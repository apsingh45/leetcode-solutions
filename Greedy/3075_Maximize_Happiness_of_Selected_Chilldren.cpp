// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/maximize-happiness-of-selected-children

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        int n = happiness.size()-1;
        sort(happiness.begin(),happiness.end());
        for(int i = 0;i<k;i++){
            int hap = happiness[n-i] - i;
            if (hap > 0) ans += hap;
            else break;
        }
        return ans;
    }
};