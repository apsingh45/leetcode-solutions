// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/binary-tree-paths

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
    vector<string> ans;

    void preorder(TreeNode* root, string path) {
        if(root == NULL) return;

        if(path.empty())
            path = to_string(root->val);
        else
            path += "->" + to_string(root->val);

        if(root->left == NULL && root->right == NULL) {
            ans.push_back(path);
            return;
        }

        preorder(root->left, path);
        preorder(root->right, path);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        preorder(root, "");
        return ans;
    }
};