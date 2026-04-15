// Time Complexity - O(n + k)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/keys-and-rooms

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>visited(n, false);
        dfs(0,rooms,visited);
        for(bool v : visited){
            if(!v) return false;
        }
        return true;
    }
private:
    void dfs(int n, vector<vector<int>>& rooms, vector<bool>& visited) {
        visited[n] = true;
        for(int a : rooms[n]){
            if (!visited[a]){
                dfs(a,rooms,visited);
            }
        }
    }
};