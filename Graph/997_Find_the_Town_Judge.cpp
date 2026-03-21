// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/find-the-town-judge

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>pt(n+1,0);
        vector<int>tp(n+1,0);

        for(auto &a : trust){
            pt[a[0]]++;
            tp[a[1]]++;
        }

        for(int i = 1;i <= n;i++){
            if(pt[i] == 0 && tp[i] == n-1){
                return i;
            }
        }
        return -1;
    }

};