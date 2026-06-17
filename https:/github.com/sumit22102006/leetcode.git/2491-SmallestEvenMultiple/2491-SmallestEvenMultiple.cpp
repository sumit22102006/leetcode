// Last updated: 17/06/2026, 09:10:44
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