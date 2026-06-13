// Time Complexity - O(V + E)
// Space Complexity - (N)

// Medium
// Leetcode - https://leetcode.com/problems/all-paths-from-source-to-target

class Graph{
    unordered_map<int,vector<int>> adj;
public:
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }

    vector<vector<int>> ans;

    void dfs(int node,int dest,vector<int>& path,unordered_set<int> & visited){
        visited.insert(node);
        path.push_back(node);

        if(node == dest){
            ans.push_back(path);
        }
        else {
            for(int neighbor : adj[node]){
                if(!visited.count(neighbor)){
                    dfs(neighbor,dest,path,visited);
                }
            }
        }
        path.pop_back();
        visited.erase(node);
    }

    vector<vector<int>> paths(int src,int dest){
        vector<int>path;
        unordered_set<int> visited;
        dfs(src,dest,path,visited);

        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        Graph g;
        int n = graph.size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<graph[i].size();j++){
                g.addEdge(i,graph[i][j]);
            }
        }
        return g.paths(0,n-1);
    }
};