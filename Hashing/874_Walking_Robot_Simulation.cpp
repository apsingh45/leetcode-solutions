// Time Complexity - O(c x k  +  O log O)
// Space Complexity - O(O)

// Easy 
// Leetcode -

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        map<vector<int>,int> mp;
        
        for(auto obs : obstacles){
            mp[obs]++;
        }

        int x = 0;
        int y = 0;

        char d = 'N';
        int maxDist = 0;

        for(int i = 0;i<commands.size();i++){
            if(commands[i] == -2){
                if(d == 'N') d = 'W';
                else if(d == 'W') d = 'S';
                else if(d == 'S') d = 'E';
                else d = 'N';
            }

            else if(commands[i] == -1){
                if(d == 'N') d = 'E';
                else if(d == 'E') d = 'S';
                else if(d == 'S') d = 'W';
                else d = 'N';
            }

            else{
                int a = commands[i];
                while(a--){
                    if(d == 'N'){
                        if(mp.find({x, y+1}) != mp.end()) break;
                        y++;
                    }
                    else if(d == 'S'){
                        if(mp.find({x, y-1}) != mp.end()) break;
                        y--;
                    }
                    else if(d == 'E'){
                        if(mp.find({x+1, y}) != mp.end()) break;
                        x++;
                    }
                    else{
                        if(mp.find({x-1, y}) != mp.end()) break;
                        x--;
                    }

                    maxDist = max(maxDist, x*x + y*y);
                }
            }
        }

        return maxDist;
    }
};