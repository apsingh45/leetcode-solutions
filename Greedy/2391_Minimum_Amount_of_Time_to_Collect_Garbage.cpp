// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage

class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& travel) {
        int g_count = 0;
        int m_count = 0;
        int p_count = 0;
        int first_g = g.size();
        int first_m = g.size();
        int first_p = g.size();
        int last_g = 0;
        int last_m = 0;
        int last_p = 0;
        for(int i = 0;i<g.size();i++){
            for(int j = 0;j<g[i].size();j++){
                if(g[i][j] == 'G'){
                    g_count++;
                    first_g = min(first_g,i);
                    last_g = max(last_g,i);
                }
                else if(g[i][j] == 'M'){
                    m_count++;
                    first_m = min(first_m,i);
                    last_m = max(last_m,i);
                }
                else{
                    p_count++;
                    first_p = min(first_p,i);
                    last_p = max(last_p,i);
                }
            }
        }
        for(int i = 1;i<travel.size();i++){
            travel[i] = travel[i]+travel[i-1];
        }
        int total_time = p_count + m_count + g_count;
        if(last_p > 0){
            total_time += travel[last_p-1];
        }
        if(last_g > 0){
            total_time += travel[last_g-1];
        }
        if(last_m > 0){
            total_time += travel[last_m-1];
        }
        return total_time;
    }
};