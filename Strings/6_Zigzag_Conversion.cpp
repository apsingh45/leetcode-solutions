// Time Complexity - O(n)
// Space Complexity -O(n) 

// Hard
// Leetcode - https://leetcode.com/problems/zigzag-conversion/description/

class Solution {
public:
    string convert(string s, int n) {
        vector<string> v(n, "");
        int i = 0;
        while (i < s.size()) {
            int a = 0;
            while (i < s.size() && a < n) {
                v[a] += s[i++];
                a++;
            }
            a = n - 2; 
            while (i < s.size() && a > 0) {
                v[a] += s[i++];
                a--;
            }
        }
        string ans = "";
        for (int i = 0; i < v.size(); i++) {
            ans += v[i];
        }
        return ans;
    }
};