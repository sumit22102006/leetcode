// Last updated: 16/06/2026, 13:03:04
class Solution {
public:
    int digitFrequencyScore(int n) {

        int digits ;
        int sum = 0; 
         while(n>0){
            digits = n%10;
            n=n/10;

   sum = sum+digits;

         }

         return sum;
    }
};