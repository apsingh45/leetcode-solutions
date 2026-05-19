// Time Complexity -  O(D * sqrt(E))
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/sum-of-primes-between-number-and-its-reverse

class Solution {
public:
    int reverseInt(int n){
        int a = 0;
        while(n){
            a = a*10 + n%10;
            n /= 10;
        }
        return a;
    }
    bool checkPrime(int n){
        if (n <= 1) return false;

        for (int i = 2;i*i <= n;i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int rev = reverseInt(n);

        int start = min(n,rev);
        int end = max(n,rev);

        int sum = 0;

        for(int i = start;i <= end;i++){
            if(checkPrime(i)) sum += i;
        }
        
        return sum;
    }
};