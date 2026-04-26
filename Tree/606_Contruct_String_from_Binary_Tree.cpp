// Time Complexity - O(N)
// Space Complexity -O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/construct-string-from-binary-tree

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
    string ans = "";
    string tree2str(TreeNode* root) {
        inorder(root);
        return ans;
    }

    void inorder(TreeNode* rt){
        if(rt == NULL) return;

        ans += to_string(rt->val);

        if(rt->left || rt->right){
            ans += "(";
            if(rt->left) inorder(rt->left);
            ans += ")";
        }

        if(rt->right){
            ans += "(";
            inorder(rt->right);
            ans += ")";
        }
    }
};