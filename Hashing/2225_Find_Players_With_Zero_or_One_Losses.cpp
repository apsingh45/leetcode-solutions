// Time Comlexity - O(N log N)
// Space Complexity - O(P)

// Medium 
// Leetcode - https://leetcode.com/problems/find-players-with-zero-or-one-losses

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        vector<int>zeroLose;
        vector<int>oneLose;

        unordered_map<int,int>mp; 

        for(int i = 0;i<matches.size();i++){
            int winner = matches[i][0];
            int looser = matches[i][1];
            mp[looser]++;
        }

        for(int i = 0;i<matches.size();i++){
            int winner = matches[i][0];
            int looser = matches[i][1];
            if(mp.find(winner) == mp.end()){
                zeroLose.push_back(winner);
                mp[winner]++;
            }
            if(mp.find(looser) != mp.end() && mp[looser] == 1) oneLose.push_back(looser);   
        }
        sort(zeroLose.begin(),zeroLose.end());
        sort(oneLose.begin(),oneLose.end());
        ans.push_back(zeroLose);
        ans.push_back(oneLose);
        
        return ans;
    }
};