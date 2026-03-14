// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/reorder-list

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
    void reorderList(ListNode* head) {
        vector<int>num;
        ListNode* temp = head;
        while(temp){
            num.push_back(temp->val);
            temp = temp->next;
        }
        vector<int>left;
        vector<int>right;
        int n = num.size();
        int mid = n - (n/2);

        for(int i = 0;i<mid;i++){
            left.push_back(num[i]);
        }

        for(int i = mid;i<n;i++){
            right.push_back(num[i]);
        }
        reverse(right.begin(),right.end());


        int i = 0;
        temp = head;
        while(i < mid){
            if(n % 2 != 0 && i == mid-1){
                temp->val = left[i];
                i++;
            }
            else{
                temp->val = left[i];
                temp->next->val = right[i];
                temp = temp->next->next;
                i++;    
            }
        }
    }
};