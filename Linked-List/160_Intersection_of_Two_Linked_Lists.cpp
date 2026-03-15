//Time Complexity - O(n + m)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/intersection-of-two-linked-lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA != tempB){
            tempA = (tempA == NULL)? headB : tempA->next;
            tempB = (tempB == NULL)? headA : tempB->next;
        }
        return tempA;
    }
};