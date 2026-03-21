// Time Complexity - O(n^2)
// Space Complexity -O(n)

// Medium
// Leetcode - https://leetcode.com/problems/longest-word-in-dictionary-through-deleting

class Solution {
private:
    bool check(string s, string t) {
        int i = 0;
        int j = 0;
        while(i < s.size()){
            if(s[i] == t[j]){
                i++;
                j++;
                if(j == t.size()) return true;
            }
            else i++;
        }
        return false;
    }
public:
    string findLongestWord(string s, vector<string>& dict){
        sort(dict.begin(), dict.end());
        string ans;
        for(int i = 0; i < dict.size(); i++){
            if(dict[i].size() > ans.size() && check(s, dict[i])) ans = dict[i];
        }    
        return ans;
    }
};