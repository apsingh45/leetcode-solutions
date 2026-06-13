// Time Complexity - O(E^2)
// Space Complexity - O(E)

// Hard 
// Leetcode - https://leetcode.com/problems/reconstruct-itinerary

class Graph{
    unordered_map<string,vector<string>> adj;
public: 
    vector<string> ans;

    void addEdge(string from,string to){
        adj[from].push_back(to);
    }

    void sortCity(){
        for(auto &it : adj){
            sort(it.second.begin(),it.second.end());
        }
    }

    void dfs(string src){
        auto &neighbors = adj[src];

        while (!neighbors.empty()) {
            string next = neighbors.front();
            neighbors.erase(neighbors.begin());
            dfs(next);
        }

        ans.push_back(src);
    }

};
class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        Graph g;
        for(auto& ticket : tickets){
            string from = ticket[0];
            string to = ticket[1];

            g.addEdge(from,to);
        }

        g.sortCity();
        g.dfs("JFK");

        vector<string> a = g.ans;
        reverse(a.begin(),a.end());

        return a;
    }
};