// Time Complexity - O(n log n)
// Space Complexity -O(n)

// Medium 
// LeetCode - https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int>s(nums.begin(),nums.end());
        vector<int>v(s.begin(),s.end());
        int count=1;
        int maxcount=1;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]-1){
                count++;
            }
            else{
                maxcount=max(maxcount,count);
                count=1;
            }
        }
        maxcount=max(maxcount,count);
        return maxcount;
    }
};