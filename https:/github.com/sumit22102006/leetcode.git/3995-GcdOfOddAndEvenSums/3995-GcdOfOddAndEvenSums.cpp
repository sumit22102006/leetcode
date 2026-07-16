// Last updated: 16/07/2026, 20:55:33
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       
        int sumOdd = 0 ;
        int sumEven = 0;

for (int i = 0; i < n; i++) {
    sumEven = sumEven + 2 * (i + 1) ;
}


for (int i = 0; i < n; i++) {
    sumOdd = sumOdd + 2 * i + 1 ;
}
  
     return gcd(sumOdd , sumEven);
    }
};