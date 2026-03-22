// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium 
// Leecode - https://leetcode.com/problems/balance-a-binary-search-tree

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

    TreeNode* build_BST(vector<int>&a, int right,int left){
        if(right > left) return NULL;

        int mid = (right+left)/2;
        TreeNode* root = new TreeNode(a[mid]);
        root->left = build_BST(a,right,mid-1);
        root->right = build_BST(a,mid+1,left);

        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>nodes;
        inorder(root,nodes);

        return build_BST(nodes,0,nodes.size()-1);
        
    }
};