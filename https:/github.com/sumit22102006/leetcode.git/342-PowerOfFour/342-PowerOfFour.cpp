// Last updated: 20/08/2026, 13:57:24
class Solution {
public:
    bool isPowerOfFour(int n) {
     if(n<=0 ){
        return false;
     }

     while(n%4 ==0){
        n /=4;
     } 

     return n==1;  
    }
};