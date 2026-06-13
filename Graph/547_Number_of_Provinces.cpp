// Time Complexity - O(N^2)
// Space Complexity - O(N)

// Medium
// Leetcode - https://leetcode.com/problems/number-of-provinces

class Graph{
    unordered_map<int,vector<int>> adj;
public:
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[u].push_back(u);
    }

    void dfs(int node ,unordered_set<int>& visited){
        visited.insert(node);

        for(int neighbor : adj[node]){
            if(!visited.count(node)){
                dfs(neighbor,visited);
            }
        }
    }

    int disconnectedComponents(){
        unordered_set<int> visited;
        int ans = 0;

        for(auto &it : adj){
            if(!visited.count(it.first)){
                ans++;
                dfs(it.first,visited);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        Graph g;
        for(int i = 0;i<isConnected.size();i++){
            for(int j = 0;j<isConnected.size();j++){
                if(isConnected[i][j]) g.addEdge(i,j);
            }
        }
        return g.disconnectedComponents();
    }
};