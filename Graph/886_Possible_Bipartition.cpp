// Time Complexity - O(V + E)
// Space Complexity - O(V)

// Medium 
// Leetcode - https://leetcode.com/problems/possible-bipartition

class Graph{
    unordered_map<int,vector<int>>adj;
public:
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isBipartite(){
        unordered_map<int,int> color;

        for(auto it : adj){
            int node = it.first;

            if(!color.count(node)){
                queue<int>q;
                q.push(node);
                color[node] = 0;

                while(!q.empty()){
                    int currNode = q.front();
                    q.pop();

                    for(int neighbor : adj[currNode]){
                        if(!color.count(neighbor)){
                            q.push(neighbor);
                            color[neighbor] = 1 - color[currNode];
                        } else if(color[neighbor] == color[currNode]){
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};
class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        Graph g;
        
        for(auto &d : dislikes){
            g.addEdge(d[0], d[1]);
        }
        
        return g.isBipartite();
    }
};