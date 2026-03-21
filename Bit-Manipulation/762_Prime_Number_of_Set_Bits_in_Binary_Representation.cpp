// Time Complexity - O(n * 32)
// Space Complexity -O(1)

// Easy
// Leetcode - https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation

class Solution {
public:
    int countOnes(string s) {
        int count = 0;
        for(char ch : s) {
            if(ch == '1')
                count++;
        }
        return count;
    }

    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
    
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0)
                return false;
        }   
        return true;
    }   

    int countPrimeSetBits(int left, int right) {
        int count = 0; 
        for(int i = left;i <= right;i++){
            string s = bitset<32>(i).to_string();
            if(isPrime(countOnes(s))) count++;
        }
        return count;
    }
};