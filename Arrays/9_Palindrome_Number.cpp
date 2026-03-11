// Time Complexity - O(log10(n))
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        int temp=x;
        long rev=0;
         while(x!=0){
            int rem=x%10;
            rev=rev*10+rem;
            x/=10;

            if(rev>INT_MAX||rev<INT_MIN){
                return 0;
            }
        }
        if(rev==temp){
            return 1;
        }
        else{
            return 0;
        }
    }
};