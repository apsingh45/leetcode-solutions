//Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// LeetCode - https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* build_BST(vector<int>&a,int right,int left){
        if(right > left)return NULL;

        int mid = (right+left)/2;

        TreeNode* root = new TreeNode(a[mid]);

        root->left = build_BST(a,right,mid-1);
        root->right = build_BST(a,mid+1,left);

        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>nodes;
        while(head){
            nodes.push_back(head->val);
            head = head-> next;
        }

        return build_BST(nodes,0,nodes.size()-1);

    }
};