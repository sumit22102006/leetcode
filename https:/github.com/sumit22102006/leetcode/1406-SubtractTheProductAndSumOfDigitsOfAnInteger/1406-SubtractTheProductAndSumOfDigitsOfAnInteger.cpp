// Last updated: 16/06/2026, 13:03:12
class Solution {
public:
    int subtractProductAndSum(int n) {
        
      int product =1;
      int sum = 0;
      int digits ;

      int result ;

      while(n>0){
        digits = n%10;

        product = product*digits;

        sum = sum + digits;

        n /=10;
      }
       result = product - sum ;

       return result;

    }
};