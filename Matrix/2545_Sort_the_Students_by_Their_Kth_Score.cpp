// Time Complexity - O(N^2)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/sort-the-students-by-their-kth-score

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score[0].size();
        for(int i = 0;i<score.size();i++){
            int a = i;
            for(int j = i+1;j<score.size();j++){
                if(score[i][k] < score[j][k]){
                    a = j;
                }
            }
            swap(score[i],score[a]);
        }
        return score;
    }
};