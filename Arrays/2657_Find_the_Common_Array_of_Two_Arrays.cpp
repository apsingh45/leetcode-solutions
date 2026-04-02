// Time Complexity - O(n^3)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>result;
        int count = 0;
        for(int i = 0; i < A.size();i++){
            count = 0;
            for(int j = 0; j <= i;j++){
                for(int k = 0; k <= i; k++){
                    if(A[j] == B[k]){
                        count++;
                    }
                }
            }
            result.push_back(count);
        }
        return result;
    }
};