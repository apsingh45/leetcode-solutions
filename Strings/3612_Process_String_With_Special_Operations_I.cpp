// Time Complexity - O(N)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/process-string-with-special-operations-i

class Solution {
public:
    string reverse(string s){
        stack<char>st;
        for(int i = 0;i<s.size();i++){
            st.push(s[i]);
        }
        string ans = "";

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
    string processStr(string s) {
        string ans = "";
        for(int i = 0;i<s.size();i++){
            int n = ans.size();
            char ch = s[i];
            if(ch <= 'z' && ch >= 'a'){
                ans += ch;
            } else if(ch == '*' && n > 0){
                ans = ans.substr(0,n-1);
            } else if(ch == '#'){
                ans += ans;
            } else {
                ans = reverse(ans);
            }
        }
        return ans;
    }
};