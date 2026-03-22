// Time Complexity - O(n + (2^k))
// Space Complexity - O(2^k)

// Medium
// Leecode - https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size() <= k) return false;

        int p = (1<<k) - 1;
        vector<int>v(p+1);

        int c = 0;
        for(int i = 0;i < k;i++){
            c = (c << 1) + (s[i] - '0');
        }
        v[c]++;

        for(int i = k ; i < s.size() ;i++){
            int a = s[i] - '0';
            c <<= 1;
            c &= p;
            c |= a;
            v[c]++;
        }
        
        for(int i = 0;i<=p;i++){
            if(!v[i]) return false;
        }
        return true;

    }
};