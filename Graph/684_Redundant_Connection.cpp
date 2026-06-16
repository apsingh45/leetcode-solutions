// Time Complexity - O(V+E)
// Space Complexity - O(V+E)

// Medium
// Leetcode - https://leetcode.com/problems/redundant-connection

class Graph{
    unordered_map<int,vector<int>> adj;
public:
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool dfs(int src, int target, unordered_set<int>& visited) {
        if (src == target) return true;

        visited.insert(src);

        for (int neighbor : adj[src]) {
            if (!visited.count(neighbor)) {
                if (dfs(neighbor, target, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        Graph g;

        for (auto& e : edges) {
            int u = e[0];
            int v = e[1];
            unordered_set<int> visited;
            if(g.dfs(u,v,visited)) return {u, v};

            g.addEdge(u, v);
        }
        return {};
    }
};