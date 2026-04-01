// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/minimum-penalty-for-a-shop

class Solution {
public:
    int bestClosingTime(string customers) {
        int penality = 0;
        for(auto a : customers){
            if(a == 'Y') penality++;
        }

        int min_penality = penality;
        int ans = 0;
        for(int i = 0;i<customers.size();i++){
            if(customers[i] == 'Y') penality--;
            else penality++;

            if(min_penality > penality){
                min_penality = penality;
                ans = i+1;
            }
        }
        return ans;
    }
};