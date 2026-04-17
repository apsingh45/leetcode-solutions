// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
//Leetcode - https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs

class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = INT_MAX;

        for(int i = 0;i < nums.size();i++){
            if(mp.find(nums[i]) != mp.end()){
                ans = min(ans,i-mp[nums[i]]);
            }

            mp[int_reverse(nums[i])] = i;
        }

        return (ans == INT_MAX)?-1:ans;
    }

private:
    int int_reverse(int n) {
        int rev = 0;
        while(n != 0){
            rev = rev*10 + (n%10);
            n /= 10;
        }
        return rev;
    }
};