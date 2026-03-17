// Time Complexity - O(nlogn + mlogm)
// Space Complexity - O(k)

// Easy
// Leetcode - https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        set<int>result;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums2[j]>nums1[i]){
                i++;
            }
            else{
                result.insert(nums1[i]);
                i++;
                j++;
            }

        }
        vector<int>output;
        for(auto i:result){
            output.push_back(i);
        }
        return output;

    }
};