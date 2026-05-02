// Time Complexity - O(N log N)
// Space Complexity - O(N)

// Medium 
//Leetcode - https://leetcode.com/problems/rotated-digits

class Solution {
public:
    bool helper(int n){
        bool a = false;
        bool b = false;

        while(n > 0){
            int d = n % 10;
            if(d == 2 || d == 5 || d == 6 || d == 9) a = true;
            if(d == 3 || d == 4 || d == 7) b = true;
            n /= 10;
        }

        if(b) return false;
        else if(a) return true;
        else return false;
    }
    int rotatedDigits(int n) {
        int count = 0;
        for(int i = 0;i<=n;i++){
            if(helper(i)) count++;
        }

        return count;
    }
};