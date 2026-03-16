// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/palindrome-linked-list

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
    bool isPalindrome(ListNode* head) {
        vector<int>num;
        while(head){
            num.push_back(head->val);
            head = head->next;
        }
        int n = num.size();
        reverse(num.begin()+n/2 ,num.end());

        for(int i = 0;i<n/2;i++){
            if(num[i] != num[(n/2) + i]) return false;
        }
        return true;
    }
};