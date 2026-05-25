// Time Complexity - O((2^N)*N)
// Space Complexity - O((2^N)*N)

// Medium 
// Leetcode - https://leetcode.com/problems/generate-binary-strings-without-adjacent-zeros

class Solution {
public:
    vector<string>ans;
    void helper(string s,int n){
        if(s.size() == n){
            ans.push_back(s);
            return;
        }
        int sn = s.size();
        if(s[sn-1] == '0'){
            helper(s + '1',n);
        }
        if(s[sn-1] == '1'){
            helper(s + '0',n);
            helper(s + '1',n);
        }
    }
    vector<string> validStrings(int n) {
        helper("0",n);
        helper("1",n);

        return ans;
    }
};