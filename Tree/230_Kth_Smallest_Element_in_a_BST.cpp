// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/kth-smallest-element-in-a-bst

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
    void inorder(TreeNode* rt,vector<int>&a){
        if(rt == NULL) return;
        
        inorder(rt->left,a);
        a.push_back(rt->val);
        inorder(rt->right,a);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>nodes;

        inorder(root,nodes);

        return nodes[k-1];
        
    }
};