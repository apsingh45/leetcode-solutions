// Time Complexity - O(n^2)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/find-words-containing-character

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& nums, char x) {
        vector<int> result;
        string word;
        int word_size = 0;
        int flag = 0;
        for(int i = 0; i <nums.size();i++){
            word = nums[i];
            flag = 0;
            for(int j = 0 ;j < word.size();j++){
                if(word[j] == x){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) result.push_back(i);
        }
        return result;
    }
};