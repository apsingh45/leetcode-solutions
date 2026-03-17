// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/binary-tree-level-order-traversal-ii


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>result;
        if(root == NULL) return result;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            vector<int>visiting;
            int level_size = q.size();
            for(int i = 1;i<=level_size;i++){
                TreeNode*
                 n = q.front();
                visiting.push_back(n->val);

                if(n->left != NULL){
                    q.push(n->left);
                }
                if(n->right != NULL){
                    q.push(n->right);
                }

                q.pop();
            }
            result.push_back(visiting);
        }

        reverse(result.begin(),result.end());
        return result;
    }
};