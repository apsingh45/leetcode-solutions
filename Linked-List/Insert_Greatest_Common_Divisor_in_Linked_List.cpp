// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list

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
#include <numeric>

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp && temp->next) {
            int n = std::gcd(temp->val, temp->next->val);
            ListNode* newNode = new ListNode(n, temp->next);
            temp->next = newNode;
            temp = newNode->next;
        }
        return head;
    }
};