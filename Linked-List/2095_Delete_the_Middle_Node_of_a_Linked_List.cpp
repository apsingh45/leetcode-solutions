// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
        if(count == 1){
            head -> next = NULL;
            return NULL; 
        }
        int middle = 0;
        middle = count / 2;
        temp = head;
        int a = 0;
        while(temp != NULL){
            a++;
            if(a == middle){
                temp -> next = temp->next->next;
            }
            temp = temp ->next;
        }
        return head;
    }
};