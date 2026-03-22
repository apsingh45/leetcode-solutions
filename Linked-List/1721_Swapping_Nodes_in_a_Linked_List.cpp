// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leecode - https://leetcode.com/problems/swapping-nodes-in-a-linked-list

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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>num;
        ListNode* temp = head;
        while(temp){
            num.push_back(temp->val);
            temp = temp->next;
        }

        swap(num[k-1],num[num.size()-k]);

        int i = 0;
        temp = head;
        while(temp){
            temp->val = num[i++];
            temp = temp->next;
        }

        return head;

    }
};