// Time Complexity - O(n^2)
// Space Complexity -O(n)

// Easy
// Leetcode - https://leetcode.com/problems/count-binary-substrings 

class Solution {
public:
    int countZeroOne(string s) {
        int zeroCount = 0;
        int oneCount = 0;

        for(char ch : s) {
            if(ch == '0')
                zeroCount++;
            else if(ch == '1')
                oneCount++;
        }
        return min(zeroCount,oneCount);
    }

    int countBinarySubstrings(string s) {
        //if(s.size() == 1) return 0;
        vector<string>a;
        vector<int>points;
        int ans = 0;

        points.push_back(0);
        for(int i = 0;i<s.size()-1;i++){
            if(s[i] != s[i+1]){
                points.push_back(i+1);
            }
        }

        if(points.size() == 1) return 0;

        for(int i = 0;i<points.size()-2;i++){
            a.push_back(s.substr(points[i],points[i+2]-points[i]));
        }

        int n = points.size() - 2;
        a.push_back(s.substr(points[n]));


        for(int i = 0;i<a.size();i++){
            ans += countZeroOne(a[i]);
        }

        return ans;

    }
};