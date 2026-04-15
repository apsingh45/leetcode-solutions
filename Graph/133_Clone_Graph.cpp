// Time Complexity - O(V + E)
//Space Complexity - O(V)

// Medium 
// Leetcode - https://leetcode.com/problems/clone-graph

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;

        unordered_map<Node*,Node*>nodeMap;
        unordered_set<Node*>visited;
        dfs(node,nodeMap,visited);
        return nodeMap[node];
    }

private:
    void dfs(Node* node,unordered_map<Node*,Node*>& nodeMap, unordered_set<Node*>& visited){
        visited.insert(node);
        nodeMap[node] = new Node(node->val);

        for(Node* neighbor : node->neighbors){
            if(visited.find(neighbor) == visited.end()){
                dfs(neighbor,nodeMap,visited);
            }
            nodeMap[node]->neighbors.push_back(nodeMap[neighbor]);
        }
    }
};