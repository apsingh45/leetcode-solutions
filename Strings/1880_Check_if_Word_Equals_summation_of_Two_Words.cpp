// Time Complexity - O(n + m+ t)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/check-if-word-equals-summation-of-two-words

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        for(auto &a : firstWord){
            a = (a -'a') + '0';
        }
        for(auto &a : secondWord){
            a = (a -'a') + '0';
        }
        for(auto &a : targetWord){
            a = (a-'a') + '0';
        }
        if (stoi(firstWord) + stoi(secondWord) == stoi(targetWord)) return true;
        else return false;
    }

};