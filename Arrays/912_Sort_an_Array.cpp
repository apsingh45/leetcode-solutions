// Time Complexity - O(n log n)
// Space Complexity -O(n)

// Medium
// Leetcode - https://leetcode.com/problems/sort-an-array 

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sortArray(nums,0,nums.size()-1);
        return nums;
    }
private:
    void sortArray(vector<int>& nums,int i,int j) {
        // base case 
        if(j-i+1 <= 1) return;

        // 1. Sub Problems 
        int m = (i+j) / 2;

        sortArray(nums,i,m);
        sortArray(nums,m+1,j);


        // Extension
        vector<int> buff;
        int i2 = i,j2 = m+1;
        while(i2 <= m || j2 <= j){
            if(j2 > j ||(i2 <= m && nums[i2] <= nums[j2])){
                buff.push_back(nums[i2]);
                i2++;
            }
            else{
                buff.push_back(nums[j2]);
                j2++;
            }
        }
        for(int k = 0;k<buff.size();k++){
            nums[i+k] = buff[k];
        }
    }
};