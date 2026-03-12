//Time Complexity - O(n)
// Space Complexity - O(h) , h = height of tree

// Easy
// LeetCode - https://leetcode.com/problems/binary-tree-inorder-traversal

class Solution {
public:
    void solve(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;

        solve(root->left, result);
        result.push_back(root->val);
        solve(root->right, result);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        solve(root, result);
        return result;
    }
};