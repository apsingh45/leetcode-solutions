// Time Complexity - O(n)
// Space Complexity - O(h) , h = Height of Tree

// Easy
// Leetcode - https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers

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
    int dfs(TreeNode* root, int c) {
        if (root == NULL) return 0;
        c = c*2 + root->val;
        if (root->left == NULL && root->right == NULL) return c;
        return dfs(root->left,c) + dfs(root->right,c);
    }

    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }
};