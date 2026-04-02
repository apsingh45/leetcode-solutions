// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Hard
// Leetcode - https://leetcode.com/problems/robot-collisions

class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<vector<int>> robots;
        vector<pair<int,int>> survivors;
        stack<int> st;

        for(int i = 0; i < n; i++){
            robots.push_back({positions[i], healths[i], directions[i], i});
        }
        sort(robots.begin(), robots.end());

        for(int i = 0; i < n; i++){
            if(robots[i][2] == 'R'){
                st.push(i);
            } 
            else {
                while(!st.empty() && robots[i][1]>0){
                    int j = st.top();
                    if(robots[j][1] < robots[i][1]){
                        st.pop();
                        robots[i][1] = robots[i][1]-1;
                        robots[j][1] = 0;
                    }
                    else if(robots[j][1] > robots[i][1]){
                        robots[j][1] = robots[j][1]-1;
                        robots[i][1] = 0;
                        break;
                    }
                    else{
                        robots[j][1] = 0;
                        robots[i][1] = 0;
                        st.pop();
                        break;
                    }
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(robots[i][1] > 0){
                survivors.push_back({robots[i][3], robots[i][1]});
            }
        }

        sort(survivors.begin(), survivors.end());

        vector<int> ans;
        for(auto &p : survivors){
            ans.push_back(p.second);
        }
        return ans;
    }
};