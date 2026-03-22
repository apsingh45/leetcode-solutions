// Time Complexity - O(n + m)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/merge-in-between-linked-lists

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        b++;
        ListNode* temp = list1;
        ListNode* start;
        ListNode* end;
        int count = 0;
        while(temp){
            count++;
            if(count == a){
                start = temp;
            }
            else if(count == b){
                end = temp;
            }
            temp = temp->next;
        }
        start->next = list2;
        ListNode* ap = list2;
        while(ap->next){
            ap = ap->next;
        }
        ap->next = end->next;

        return list1;
    }
};