// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy 
// Leetcode - https://leetcode.com/problems/linked-list-cycle

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
    bool hasCycle(ListNode *head) {
        unordered_set <ListNode*> a;
        while(head != NULL){
            if(a.find(head) != a.end()) return true;
            a.insert(head);
            head = head->next;
        }
        return false;

    }
};

