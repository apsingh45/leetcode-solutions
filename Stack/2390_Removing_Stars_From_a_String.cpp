// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    string removeStars(string s) {
        stack<char>ap;
        for(int i = 0;i<s.size();i++){
            ap.push(s[i]);
            if(s[i] == '*'){
                ap.pop();
                ap.pop();
            }
        }
        string a = "";
        while(!ap.empty()){
            a += ap.top();
            ap.pop();
        }

        reverse(a.begin(),a.end());
        return a;
    }
};