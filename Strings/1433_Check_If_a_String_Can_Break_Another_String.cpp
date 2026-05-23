// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/check-if-a-string-can-break-another-string

class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        int n = s1.size();
        int count1 = 0;
        int count2 = 0;

        for(int i = 0;i<n;i++){
            if(s1[i] >= s2[i]) count1++;
            if (s2[i] >= s1[i]) count2++;
        }
        if(count1 == n || count2 == n) return true;

        return false;
    }
};