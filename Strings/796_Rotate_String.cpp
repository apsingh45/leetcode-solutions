// Time Complexity - O(N^2)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/rotate-string

class Solution {
public:
    string rotate(string &s){
        if(s.size() == 1) return s;

        char a = s.back();
        s.pop_back();

        return a + s;
    }
    bool rotateString(string s, string goal) {
        for(int i = 0;i<s.size();i++){
            rotate(goal);
            cout << goal << endl;
            if(goal == s) return true;
        }

        return false;
    }
};