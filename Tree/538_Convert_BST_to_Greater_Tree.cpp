// Time Complexity - O(n)
// Space Complexity -O(h) , h = height of tree

// Medium
// Leetcode - https://leetcode.com/problems/convert-bst-to-greater-tree

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
    long long a = 0;
    void reverse_inorder(TreeNode* rt){
        if (rt == NULL) return;

        reverse_inorder(rt->right);
        a += rt->val;
        rt->val = a;
        reverse_inorder(rt->left);

    }
    TreeNode* convertBST(TreeNode* root) {
        reverse_inorder(root);
        return root;
    }
};