// Time Complexity - O(n^2)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/find-resultant-array-after-removing-anagrams

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        for(int i = 0;i < n-1;i++){
            string temp1 = words[i];
            string temp2 = words[i+1];
            sort(temp1.begin(),temp1.end());
            sort(temp2.begin(),temp2.end());
            if(temp1 == temp2){
                words.erase(words.begin() + i+1);
                i--;
                n--;
            }
        }
        return words;
    }
};