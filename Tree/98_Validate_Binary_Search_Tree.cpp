//Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// LeetCode - https://leetcode.com/problems/validate-binary-search-tree


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
    void inorder(TreeNode* root,vector<int>&a) {
    if (root == nullptr) return;

    inorder(root->left,a); 
    a.push_back(root->val); 
    inorder(root->right,a);
}

    bool isValidBST(TreeNode* root) {
        vector<int>nodes;
        inorder(root,nodes);
        
        for(int i = 0;i<nodes.size()-1;i++){
            if(nodes[i] >= nodes[i+1]) return false;
        }
        
        return true;
    }
};