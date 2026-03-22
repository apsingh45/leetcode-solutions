// Time Complexity - O(k log k)
// Space Complexity - O((2^n) * n)

// Medium
// Leecode - https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n

class Solution {
public:
    void solveRec(int n, int k, vector<string>& s, string curr){
        if(curr.length() == n){
            s.push_back(curr);
            return;
        }

        if(curr.empty() || curr.back() != 'a'){
            solveRec(n,k,s,curr + 'a');
        }
        if(curr.empty() || curr.back() != 'b'){
            solveRec(n,k,s,curr + 'b');
        }
        if(curr.empty() || curr.back() != 'c'){
            solveRec(n,k,s,curr + 'c');
        }
    }

    string getHappyString(int n, int k) {
        vector<string>s;
        solveRec(n,k,s,"");
        sort(s.begin(), s.end());
        if(s.size() < k) return "";

        return s[k - 1];
    }
};