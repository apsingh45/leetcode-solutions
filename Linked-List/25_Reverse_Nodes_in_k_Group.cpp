// Time Complexity -O(n)
// Space Compexity - O(1)

// Hard 
// Leetcode - https://leetcode.com/problems/reverse-nodes-in-k-group

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
    ListNode* reverse(ListNode* start, ListNode* end) {
        ListNode* prev = NULL;
        ListNode* curr = start;
        ListNode* next = NULL;

        ListNode* stop = end->next;
        while (curr != stop) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* start = head;
        ListNode* end = head;
        ListNode* prev = NULL;

        int a = 0;

        while (end) {
            a++;
            if (a == k) {
                ListNode* nextNode = end->next;
                ListNode* newHead = reverse(start, end);

                if (prev) prev->next = newHead;
                else head = newHead;

                start->next = nextNode;

                prev = start;
                start = nextNode;
                end = nextNode;

                a = 0;
            } 
            else {
                end = end->next;
            }
        }
        return head;
    }
};