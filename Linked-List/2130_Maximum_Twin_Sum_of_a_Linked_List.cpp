// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
    int pairSum(ListNode* head) {
        vector<int>nums;
        while(head){
            nums.push_back(head->val);
            head = head->next;
        }

        int n = nums.size() / 2;
        reverse(nums.begin()+n,nums.end());
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans = max(ans,nums[i] + nums[i+n]);
        }
        return ans;
    }
};