// Time Complexity - O(n)
// Space Complexity - O(h) h =height of tree

// Easy
// Leetcode - https://leetcode.com/problems/deepest-leaves-sum

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
    int sum = 0;
    int maxDepth = INT_MIN;

    void inorder(TreeNode* rt,int depth) {
        if(rt == NULL) return;

        if(rt->left == NULL && rt->right == NULL) {
            if(depth > maxDepth) {
                maxDepth = depth;
                sum = rt->val;
            }
            else if(depth == maxDepth) {
                sum += rt->val;
            }
        }

        inorder(rt->left, depth+1);
        inorder(rt->right, depth+1);
    }

    int deepestLeavesSum(TreeNode* root) {
        inorder(root,0);
        return sum;
    }
};