// Time Complexity - O(N log M)
// Space Complexity - O(N log M)

// Easy 
// Leetcode - https://leetcode.com/problems/separate-the-digits-in-an-array

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>result;

        for(int i = 0;i<nums.size();i++){
            int n = nums[i];
            vector<int>temp;

            while(n > 0){
                temp.push_back(n%10);
                n /= 10;
            }

            for(int j = temp.size()-1;j >= 0;j--){
                result.push_back(temp[j]);
            }
        }

        return result;
    }
};