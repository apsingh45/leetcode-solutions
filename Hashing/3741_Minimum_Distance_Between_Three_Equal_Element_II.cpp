// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>map;
        for(int i = 0;i < nums.size();i++){
            map[nums[i]].push_back(i);            
        }
        int min_dis = INT_MAX;
        for(auto &a : map){
            auto &v = a.second;
            if(v.size()>=3){
                for(int i =0;i + 2<v.size();i++){
                    int distance=2*(v[i+2]-v[i]);
                    min_dis=min(min_dis,distance);
                }
            }
        }
        return(min_dis==INT_MAX?-1:min_dis);
    }
};