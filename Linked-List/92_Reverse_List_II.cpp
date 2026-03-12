//Time Complexity - O(n)
// Space Complexity - O(right - left + 1)

// Medium
// LeetCode - https://leetcode.com/problems/reverse-linked-list-ii/description/


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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>num;
        int pos = 1;
        ListNode* temp = head;
        while(temp){
            if(pos <= right && pos >= left) num.push_back(temp->val);
            temp = temp->next;
            pos++;
        }

        reverse(num.begin(),num.end());
        temp = head;
        pos = 1;
        int i = 0;
        while(temp){
            if(pos <= right && pos >= left) {
                temp->val = num[i];
                i++;
            }
            temp = temp->next;
            pos++;
        }

    return head;
    }
};