// Time Complexity -O(n log n)
// Space Complexity - O(1) 

// Easy
// Leetcode - https://leetcode.com/problems/count-integers-with-even-digit-sum

class Solution {
public:
    int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
    int countEven(int num) {
        if( num < 2 ) return 0;
        int count=0;
        for( int i = 2 ; i <= num ; i++){
            if(digitSum(i) % 2 == 0) { 
                count++ ;
            }
        }
        return count;
    }
};