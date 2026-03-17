// Time Complexity - O(log n)
// Space Complexity - O(log n)

// Easy
// Leetcode - https://leetcode.com/problems/add-digits

class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num;
        int temp = 0;
        while(num > 0){
            temp = temp + num % 10; 
            num /= 10; 
        }
        return addDigits(temp);
        
    }
};