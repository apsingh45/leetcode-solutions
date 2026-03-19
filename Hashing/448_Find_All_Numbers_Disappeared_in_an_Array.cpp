// Time complexity - O(n)
// Space Complexity -O(n)

// Easy
// Leetcode - https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>result;
        for(auto a : nums){
            map[a]++;
        }

        for(int i = 1;i<=nums.size();i++){
            if(map.find(i) == map.end()){
                result.push_back(i);
            }
        }

        return result;
    }
};