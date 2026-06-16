// Time Complexity - O(N)
// Space Complexity - O(N)

// Easy
// Leetcode - https://leetcode.com/problems/rings-and-rods

class Solution {
public:
    int countPoints(string rings){
        unordered_map<int,set<char>>mp;

        for(int i = 0;i<rings.size();i+=2){
            char ch1 = rings[i];
            char ch2 = rings[i+1];
            int a = ch2 - '0';

            mp[a].insert(ch1);
        }

        int count = 0;
        for(auto &it : mp){
            if(it.second.size() == 3) count++;
        }
        return count;
    }
};