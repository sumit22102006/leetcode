// Last updated: 16/06/2026, 13:03:06
class Solution {
public:
    int smallestEvenMultiple(int n) {

       int result ;

       if(n>0 && n%2==0){
         return n;
       }

       if(n>0 && n%2!=0){
         
         result = n*2;
       }

       return result;
    }
};