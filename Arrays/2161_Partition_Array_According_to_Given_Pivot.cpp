// Time Complexity -O(n)
// Space Complexity - O(n) 

// Medium
// Leetcode - https://leetcode.com/problems/partition-array-according-to-given-pivot

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>greater;
        vector<int>result;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == pivot) count++;
            else if (nums[i] < pivot){
                less.push_back(nums[i]);
            }
            else{
                greater.push_back(nums[i]);
            }
        }
        for(int a = 0; a < less.size();a++){
            result.push_back(less[a]);
        }
        for(int a = 0; a < count;a++){
            result.push_back(pivot);
        }
        for(int a = 0; a < greater.size();a++){
            result.push_back(greater[a]);
        }
        return result;
    }
};