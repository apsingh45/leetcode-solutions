// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    bool isVowel(char ch){
        if (ch=='a'||ch=='e'||ch=='i'||ch=='u'||ch=='o'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int count=0;
        for (int i=0 ; i<k ; ++i){
            if (isVowel(s[i])){
                count++;
            }
        }
        int max=count;
        for (int i=k ; i<s.size(); ++i){
            if (isVowel(s[i-k])){
                count--;
            }
            if(isVowel(s[i])){
                count++;
            }
            if (count > max){
                max=count;
            }
        }
        return max;
    }
};