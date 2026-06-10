// Time Complexity - O(V + E)
// Space Complexity - O(V)

// Medium 
// Leetcode - https://leetcode.com/problems/course-schedule-iv

class Graph{
    unordered_map<int,vector<int>> adj;
public:
    int numCourses;
    Graph(int n){
        this->numCourses = n;
    }
    void addNode(int u){
        if(adj.find(u) == adj.end()){
            adj[u] = {};
        }
    }
    
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }
    
    vector<vector<bool>>isReachable(){
        vector<vector<bool>>ans(numCourses,vector<bool>(numCourses,false));

        for(int i = 0;i<numCourses;i++){
            queue<int>q;
            vector<bool>visited(numCourses,false);

            q.push(i);
            visited[i] = true;

            while(!q.empty()){
                int node = q.front();
                q.pop();

                for(int neighbor : adj[node]){
                    if(!visited[neighbor]){
                        visited[neighbor] = true;
                        ans[i][neighbor] = true;
                        q.push(neighbor);
                    }
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        Graph g(numCourses);

        for(auto &p : prerequisites){
            g.addEdge(p[0],p[1]);
        }

        vector<vector<bool>> isReachable = g.isReachable();
        vector<bool>ans;

        for(auto &q : queries){
            ans.push_back(isReachable[q[0]][q[1]]);
        } 
        
        return ans;
    }
};