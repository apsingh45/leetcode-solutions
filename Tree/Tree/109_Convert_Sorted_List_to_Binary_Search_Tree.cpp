// Time Complexity - O(n log n)
// Space Complexity - O(log n)

// Medium
// Leetcode - https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

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
    TreeNode* sortedListToBST(ListNode* head) {
        return buildBST(head);
    }

    ListNode* getMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* previous = NULL;

        while(fast && fast->next){
            previous = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(previous){
            previous->next=NULL;
        }
        return slow;
    }

    TreeNode* buildBST(ListNode* node){
        if(!node) return nullptr;

        if(!node->next){
            return new TreeNode(node->val);
        }
        ListNode* middle = getMiddle(node);

        TreeNode* ans = new TreeNode(middle->val);
        ans->left = buildBST(node);
        ans->right = buildBST(middle->next);

        return ans;
    }
};