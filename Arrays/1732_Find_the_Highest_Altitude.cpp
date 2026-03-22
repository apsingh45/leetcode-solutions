// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Easy
// Leecode - https://leetcode.com/problems/find-the-highest-altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       vector<int>altitudes;
       altitudes.push_back(0);
       for(int i = 0; i < gain.size();i++){
        altitudes.push_back(gain[i] + altitudes[i]);
       } 
       sort(altitudes.begin(),altitudes.end());
       return altitudes[altitudes.size()-1];
    }
};