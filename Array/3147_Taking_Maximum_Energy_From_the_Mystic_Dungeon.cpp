// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon

class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        int ans = INT_MIN;
        int sum = 0;
        for(int i = n-k;i<n;i++){
            sum = 0;
            for(int j = i;j>=0;j-=k){
                sum += energy[j];
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};