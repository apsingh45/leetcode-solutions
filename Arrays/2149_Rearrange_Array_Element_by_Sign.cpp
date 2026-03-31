// Time Complexity -O(n)
// Space Complexity - O(n) 

// Medium 
// Leetcode - https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>negative;
       vector<int>positive;
       vector<int>result;
       for(int x : nums) {
        if(x < 0){
            negative.push_back(x);
        }
        else{
            positive.push_back(x);
        }
       }
       int element = 0;
       int p = -1;
       int n = -1;
       for(int i = 0;i < nums.size(); i++) {
        if(i % 2 == 0){
            element = positive[++p];
            result.push_back(element);
        }
        else{
            element = negative[++n];
            result.push_back(element);
        }
       } 
       return result;
    }
};