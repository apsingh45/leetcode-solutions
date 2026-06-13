// Time Complexity - O(N^2)
// Space Complexity - O(1)

// Easy 
// Leetcode - https://leetcode.com/problems/weighted-word-mapping

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for(int i = 0;i<words.size();i++){
            int sum = 0;
            for(int j = 0;j<words[i].size();j++){
                char ch = words[i][j];
                sum = (sum + weights[ch - 'a']) % 26;
            }
            ans += 'z' - sum;
        }
        return ans;
    }
};