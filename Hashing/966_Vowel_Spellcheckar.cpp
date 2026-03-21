// Time Complexity - O((n x m) + (q x m))
// Space Complexity - O(n x m)

// Medium
// Leetcode - https://leetcode.com/problems/vowel-spellchecker

class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string changeVowel(string s) {
        string ans = "";
        for (char& ch : s) {
            if (isVowel(ch)) {
                ans += '*';
            } 
            else {
                ans += ch;
            }
        }
        return ans;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string> ans(queries.size(),"");
        unordered_set<string> set;
        unordered_map<string,string> islower;
        unordered_map<string,string> vowelMatch;

        for (int i=0; i<wordlist.size(); i++) {
            set.insert(wordlist[i]);

            string s = wordlist[i];
            transform(s.begin(),s.end(), s.begin(),::tolower);
            
            if (islower.find(s) == islower.end()) {
                islower[s] = wordlist[i];
            }

            string v = changeVowel(s);

            if (vowelMatch.find(v) == vowelMatch.end()) {
                vowelMatch[v] = wordlist[i];
            }
        }

        for (int i=0; i<queries.size(); i++) {

            string s = queries[i];

            if (set.find(s) != set.end()) {
                ans[i] = s;
                continue;
            }
            transform(s.begin(),s.end(),s.begin(),::tolower);

            if (islower.find(s) != islower.end()) {
                ans[i] = islower[s];
                continue;
            }
            
            string v = changeVowel(s);

            if (vowelMatch.find(v) != vowelMatch.end()) {
                ans[i] = vowelMatch[v];
                continue;
            }
        }

        return ans;
    }
};