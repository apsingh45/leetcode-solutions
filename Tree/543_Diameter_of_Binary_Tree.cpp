// Time Complexity - O(n)
// Space Complexity -O(h) , h = height of tree

// Medium
// Leetcode - https://leetcode.com/problems/diameter-of-binary-tree

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
    int diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return diameter;
    }

    int dfs(TreeNode* node){
        if(node == nullptr) return 0;

        int left_depth = dfs(node->left);
        int right_depth = dfs(node->right);

        diameter = max(diameter,left_depth+right_depth);

        return 1 + max(left_depth , right_depth);
    }
};