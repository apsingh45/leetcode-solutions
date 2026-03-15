//Time Complexity - O(n log k)
// Space Complexity - O(k)

// Medium
// Leetcode - https://leetcode.com/problems/kth-largest-element-in-an-array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>minPQ;
        for(int &num : nums){
            minPQ.push(num);
            if(minPQ.size()>k){
                minPQ.pop();
            }
        }
        return minPQ.top();
    }
};