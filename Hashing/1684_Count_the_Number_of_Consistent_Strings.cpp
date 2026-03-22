// Time Complexity - O(n*2)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/count-the-number-of-consistent-strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>s;
        for(int i = 0;i<allowed.size();i++){
            s.insert(allowed[i]);
        }
        int n = 0;

        for(int i = 0; i < words.size();i++){
            int count = 0;
            for(int j = 0;j<words[i].size();j++){
                if(s.find(words[i][j])!= s.end()){
                    count ++;
                }
            }
            if(count == words[i].size()) n++;
        }
        return n;
    }
};