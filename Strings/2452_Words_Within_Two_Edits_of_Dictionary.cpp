// Time Complexity - O(n^3)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/words-within-two-edits-of-dictionary

class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> result;
        for(int i = 0;i<queries.size();i++){
            for(int j = 0;j<dictionary.size();j++){
                int count = 0;
                string q = queries[i];
                string d = dictionary[j];

                for(int i = 0;i<q.size();i++){
                    if(q[i] != d[i]){ 
                        count++;
                        if(count > 2) break;
                    }
                }

                if(count <= 2){
                    result.push_back(q);
                    break;
                }
            }
        }
        return result;
    }
};