// Time Complexity - O(N)
// Space Complaxity - O(N)

// Hard
// Leetcode - https://leetcode.com/problems/longest-cycle-in-a-graph

class Solution {
public:
    void dfs(int node,int &maxCycle,int currCycle,vector<int>& edges,vector<int>& recStack,vector<int>& dist,vector<int>& visited){

        visited[node] = 1;
        recStack[node] = 1;
        dist[node] = currCycle;

        if(edges[node] != -1 && !visited[edges[node]]){
            dfs(edges[node],maxCycle,currCycle+1,edges,recStack,dist,visited);
        } else if(edges[node] != -1 && recStack[edges[node]]){
            maxCycle = max(maxCycle,currCycle - dist[edges[node]] + 1);
        }

        recStack[node] = 0;
    }

    int longestCycle(vector<int>& edges) {
        int n = edges.size();

        vector<int> visited(n,0),recStack(n,0),dist(n,0);
        int maxCycle = -1;

        for(int i = 0;i<n;i++){
            if(!visited[i]){
                dfs(i,maxCycle,0,edges,recStack,dist,visited);
            }
        }
        return maxCycle;
    }
};