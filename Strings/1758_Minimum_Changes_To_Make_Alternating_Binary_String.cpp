// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leecode - https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string

class Solution {
public:
    string gen_1(int n){
        string s ="1";
        for(int i = 1;i<n;i++){
            s += '0';
            i++;
            if(i<n) s += '1';
        }
        return s;
    }

    string gen_0(int n){
        string s ="0";
        for(int i = 1;i<n;i++){
            s += '1';
            i++;
            if(i<n) s += '0';
        }
        return s;
    }

    int compare(string s1,string s2){
        int count = 0;
        for(int i = 0;i<s1.size();i++){
            if(s1[i] != s2[i]) count++;
        }
        return count;
    }

    int minOperations(string s) {
        int n = s.size();
        string s0 = gen_0(n);
        string s1 = gen_1(n);

        return min(compare(s0,s),compare(s1,s));
    }
};