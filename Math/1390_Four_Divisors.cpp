// Time Complexity - O(N * sqrt(M))
// Space Complexity - O(1)

// Medium 
// Leecode - https://leetcode.com/problems/four-divisors

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int result = 0;
        int curr_sum = 0;
        int n = 0;
        int count = 0;
        for(int i = 0; i < nums.size();i++){
            n = nums[i];
            count = 0;
            curr_sum = 0;
            for(int j = 1;j <= sqrt(n);j++){
                if(n % j == 0){
                    int other = n/j;
                    if(j == other){
                        count++;
                        curr_sum += j;
                    }
                    else{
                        count += 2;
                        curr_sum += j+other;
                    }
                }
                if(count>4) break;
            }
            if(count == 4){
                result += curr_sum;
            }
        }
        return result;
    }
};