// Time Complexity - O((n + m) log(n + m))
// Space Complexity -O(1) 

// Hard
// Leetcode - https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int element = 0;
        double result;
        int result_index;
        for( int i = 0 ;i < nums2.size() ; i++) {
            element = nums2[i];
            nums1.push_back(element);
        }
        sort(nums1.begin(),nums1.end());
        int size = nums1.size();
        result_index = size / 2;
        if ( size % 2 == 0) {
            result = (nums1[result_index]+nums1[result_index-1]) / 2.0;
        }
        else{
            result = nums1[result_index];
        }
        return result;
    }
};