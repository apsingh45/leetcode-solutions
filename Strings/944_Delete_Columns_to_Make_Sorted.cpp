// Time Complexity - O(n x m log m)
// Space Complexity -O(n)

// Easy
// Leetcode - https://leetcode.com/problems/delete-columns-to-make-sorted/description/

class Solution {
public:
    int minDeletionSize(vector<string>& strs){
        int n = strs.size();
        int a = strs[0].size();
        int count = 0;

        for(int i=0;i<a;i++){
            vector<char>ch;
            for(int j = 0;j<n;j++){
                ch.push_back(strs[j][i]);
            }
            vector<char>ch1(ch.begin(),ch.end());
            sort(ch.begin(),ch.end());
            if(ch != ch1) count++;
        }
        return count;
    }
};