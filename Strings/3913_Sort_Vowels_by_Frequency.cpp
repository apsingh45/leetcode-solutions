// Time Complexity -  O(N log N)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/sort-vowels-by-frequency

class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowels;
        unordered_map<char,int>freq;

        for(char c : s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vowels.push_back(c);
                freq[c]++;
            }
        }
        
        vector<pair<char,int>>v(freq.begin(), freq.end());

        sort(v.begin(),v.end(), [](auto &a, auto &b){
            return a.second >= b.second;
        });

        int i = 0;
        for(auto &a : v){
            char ch = a.first;
            int f = a.second;

            for(int j = 1;j<=f;j++){
                vowels[i] = ch;
                i++;
            }
        }
        int p = 0;
        for(char &c : s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                c = vowels[p];
                p++;
            }
        }
        return s;
    }
};