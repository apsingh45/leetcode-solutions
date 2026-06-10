// Time Complexity - O(V + E)
// Space Complexity - O(V)

// Medium 
// Leetcode - https://leetcode.com/problems/course-schedule-ii

class Graph{
    unordered_map<int,vector<int>> adj;
public:
    void addNode(int u){
        if(adj.find(u) == adj.end()){
            adj[u] = {};
        }
    }
    
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }
    
    bool dfs(int node,unordered_set<int>& visited,unordered_set<int>& recStack){

        visited.insert(node);
        recStack.insert(node);

        for(int neighbor : adj[node]){
            if(!visited.count(neighbor)){
                if(dfs(neighbor,visited,recStack)) return true;
            }else if(recStack.count(neighbor)) return true;
        }
        recStack.erase(node);
        return false;
    }

    bool hasCycle(){
        unordered_set<int>visited,recStack;

        for(auto it : adj){
            if(!visited.count(it.first)){
                if(dfs(it.first,visited,recStack)) return true;
            }
        }

        return false;
    }

    void helper(int node,unordered_set<int>& visited,stack<int>&s){
        visited.insert(node);

        for(int neighbor : adj[node]){
            if(!visited.count(neighbor)){
                helper(neighbor,visited,s);
            }
        }
        s.push(node);
    }

    vector<int>topoSort(){
        unordered_set<int>visited;
        vector<int>ans;
        stack<int>s;

        for(auto it : adj){
            if(!visited.count(it.first))
                helper(it.first,visited,s);
        }

        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        Graph g;

        for(int i = 0; i < numCourses; i++){
            g.addNode(i);
        }

        for(int i = 0;i<prerequisites.size();i++){
            g.addEdge(prerequisites[i][1],prerequisites[i][0]);
        }

        if(g.hasCycle()) return {};
        return g.topoSort();
    }
};