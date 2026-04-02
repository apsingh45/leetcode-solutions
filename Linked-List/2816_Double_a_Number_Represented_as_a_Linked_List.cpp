// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/double-a-number-represented-as-a-linked-list

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
    ListNode* doubleIt(ListNode* head) {
        ListNode result(0);
        ListNode* a = &result;
        int carry = 0;
        int product = 0;
        stack<int>s1;
        stack<int>s2;
        while(head){
            s1.push(head->val);
            head = head->next;
        }
        while(!s1.empty()){
            int product = ((s1.top()*2)%10) + carry;
            carry =  (s1.top()*2)/10;
            s2.push(product);
            s1.pop();
        }
        if(carry != 0){
            s2.push(carry);
        }

        while(!s2.empty()){
            a->next = new ListNode(s2.top());
            a = a->next;
            s2.pop();
        }
        return result.next;

    }
};