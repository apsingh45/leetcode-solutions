// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        int n1 = s1.size();
        int n2 = s2.size();

        if(n1 > n2) return false;

        for(int i = 0;i<n1;i++){
            freq1[s1[i] - 'a']++;
        }

        for(int i = 0;i<n1;i++){
            freq2[s2[i] - 'a']++;
        }

        if(freq1 == freq2) return true;
        int i = 0;
        int j = n1 -1;

        while(j+1<n2){
            freq2[s2[i] - 'a']--;
            i++;
            freq2[s2[j + 1] - 'a']++;
            j++;

            if(freq1 == freq2) return true;
        }

        return false;

    }
};