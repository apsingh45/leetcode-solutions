// Time Complexity - O(V + E)
// Space Complexity - O(V)

// Medium 
// Leetcode - https://leetcode.com/problems/course-schedule


class Graph{
    unordered_map<int,vector<int>> adj;
public:

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
};

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        Graph g;
        for(int i = 0;i<prerequisites.size();i++){
            g.addEdge(prerequisites[i][1],prerequisites[i][0]);
        }
        return !g.hasCycle();
    }
};