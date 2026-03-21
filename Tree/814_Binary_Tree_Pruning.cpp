// Time Complexity - O(n)
// Space Complexity -O(h) , h =  height of tree

// Medium
// Leetcode - https://leetcode.com/problems/binary-tree-pruning

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
    TreeNode* pruneTree(TreeNode* root) {
        return dfs(root) ? root : nullptr;

    }

    bool dfs(TreeNode* node){
        if(node == nullptr) return false;

        bool leftStatus = dfs(node->left);
        bool rightStatus = dfs(node->right);

        if(leftStatus == false){
            node->left = nullptr;
        }

        if(rightStatus == false){
            node->right = nullptr;
        }

        if(rightStatus || leftStatus || node->val) return true;

        else return false;
    }
};