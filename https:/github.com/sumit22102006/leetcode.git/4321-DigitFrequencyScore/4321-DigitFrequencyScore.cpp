// Last updated: 17/06/2026, 09:10:50
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