// Time Complexity - O(n^2)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations

class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        long long rev = 0;
        while(x){
            rev = rev*10 + x%10;
            x /= 10;
        }

        if(rev>INT_MAX || rev<INT_MIN) return 0;
        if(flag == 1){
            return -1*rev;
        }
        else return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            nums.push_back(reverse(nums[i]));
        }
        set<int>s(nums.begin(),nums.end());
        return s.size();
    }
};