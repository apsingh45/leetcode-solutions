// Time Complexity - O(n^2)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>result;
        map<int,int>freq;
        for(auto it : nums){
            freq[it]++;
        }
        for(int i = 0;i<nums.size();i++){
            vector<int>temp;
            for(auto &a : freq){
                if(a.second != 0){
                    temp.push_back(a.first);
                    a.second--;
                    i++;
                }
            }
            result.push_back(temp);
            i--;
        }
        return result;
    }
};