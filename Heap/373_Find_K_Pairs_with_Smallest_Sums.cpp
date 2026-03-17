// Time Complexity - O(k log k)
// Space Complexity - O(k)

// Medium
// Leetcode - https://leetcode.com/problems/find-k-pairs-with-smallest-sums

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>result;
        priority_queue<pair<int, pair<int,int>>,vector<pair<int, pair<int,int>>>,
    greater<pair<int, pair<int,int>>>> pq;

    set<pair<int,int>> visited;

    int i = 0;
    int j = 0;

    visited.insert({0,0});
    pq.push({nums1[i]+nums2[j],{i,j}});



    while(k-- && !pq.empty()){

        auto p = pq.top();
        pq.pop();
        i = p.second.first;
        j  = p.second.second;

        result.push_back({nums1[i],nums2[j]});
        
        if(i+1 < nums1.size() && visited.find({i+1 , j}) == visited.end()){
            pq.push({nums1[i+1]+nums2[j],{i+1,j}});
            visited.insert({i+1,j});
        }

        if(j+1 < nums2.size() && visited.find({i,j+1}) == visited.end()){
            pq.push({nums1[i]+nums2[j+1],{i,j+1}});
            visited.insert({i,j+1});
        }
    }
    return result;
    
    }
};