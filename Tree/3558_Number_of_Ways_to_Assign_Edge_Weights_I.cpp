// Time Complexity - O(N)
// Space Complexity - O(N)

// Medium
// Leetcode - https://leetcode.com/problems/number-of-ways-to-assign-edge-weights-i

class Tree{
    unordered_map<int,vector<int>> adj;
public:
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int dfs(int node,unordered_set<int>& visited){
        visited.insert(node);
        int maxDepth = 0;

        for(int neighbor : adj[node]){
            if(!visited.count(neighbor)){
            int depth = dfs(neighbor,visited);
            maxDepth = max(maxDepth,depth);
            }
        }
        visited.erase(node);
        return (maxDepth + 1);
    }

    int maxDepth(int src){
        unordered_set<int>visited;
        return dfs(src,visited);
    }
};

class Solution {
public:
    int assignEdgeWeights(vector<vector<int>>& edges) {
        Tree t;

        for(auto &e : edges){
            t.addEdge(e[0],e[1]);
        }

        int maxDepth = t.maxDepth(1);

        int ans = 1;
        for(int i = 1;i<maxDepth-1;i++){
            ans = (ans * 2) % 1000000007;
        }
        return ans;
    }
};