// Time Complexity - O(n)
// Space Complexity - O(h) where h = Height of the tree

// Easy 
// Leetcode - https://leetcode.com/problems/binary-tree-tilt

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
    int total_tilt = 0;

    int postorder(TreeNode* rt){
        if(rt == NULL) return 0;

        int ls = postorder(rt->left);
        int rs = postorder(rt->right);

        total_tilt += abs(ls-rs);
        return ls+rs+rt->val;
    }
    int findTilt(TreeNode* root) {
        postorder(root);

        return total_tilt;
        
    }
};