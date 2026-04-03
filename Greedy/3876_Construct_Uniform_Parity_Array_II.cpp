// Time Complexity - O(n^2)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/construct-uniform-parity-array-ii

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int>a = nums1;
        sort(nums1.begin(),nums1.end());

        for(int i = 0;i<=1;i++){
            bool possible = true;

            for(int j = 0;j<n;j++){
                int val_party = nums1[j] % 2;

                if(val_party == i) continue;

                bool found = false;

                for(int k = 0;k<j;k++){
                    if(nums1[j] - nums1[k] >= 1){
                        int new_val = nums1[j] - nums1[k];
                        if((new_val % 2) == i){
                            found = true;
                            break;
                        }
                    }
                }
                if(!found) {
                    possible = false;
                    break;
                }
            }
            if(possible) return true;
        }
        return false;
    }
};