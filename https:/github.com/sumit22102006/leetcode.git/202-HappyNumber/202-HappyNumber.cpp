// Last updated: 23/08/2026, 19:57:48
class Solution {
public:
    bool isHappy(int n) {


        set<int> seen;

        while (n != 1) {

            if (seen.count(n)) {
                return false;
            }

            seen.insert(n);


        int result = 0;
      while(n >0){
        int digit = n%10;
       

         result = result + digit*digit ;
          n /= 10;

         
      }
   n= result;
        
        }

     return true ; 
    }
};