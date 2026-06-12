// Time Complexity - O(N^2 log N)
// Space Complexity - O(N)

// Medium
// Leetcode - https://leetcode.com/problems/min-cost-to-connect-all-points

class Graph {
    int V;
    vector<vector<pair<int,int>>> adj; 

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int MST(){
        vector<bool>inMST(V,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        pq.push({0,0});
        int totalCost = 0;

        while(!pq.empty()){
            auto[wt,node] = pq.top();
            pq.pop();

            if(inMST[node]) continue;

            inMST[node] = true;
            totalCost += wt;

            for(auto &neighbor : adj[node]){
                int v = neighbor.first;
                int curr_wt = neighbor.second;

                if(!inMST[v]){
                    pq.push({curr_wt,v});
                }
            }
        }
        return totalCost;
    }

};
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        Graph g(n);

        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int wt = abs(points[i][0] - points[j][0])
                        + abs(points[i][1] - points[j][1]);

                g.addEdge(i,j,wt);
            }
        }
        return g.MST();
    }
};