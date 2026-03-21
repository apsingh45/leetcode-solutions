// Time Complexity - O(n + m)
// Space Complexity -O(n)

// Easy
// Leetcode - https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>map;
        for(auto a : jewels){
            map[a]++;
        }

        int count = 0;
        for(int i = 0; i<stones.size();i++){
            if(map.find(stones[i]) != map.end()) count++;
        }
        return count;
    }
};