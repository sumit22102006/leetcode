// Last updated: 17/06/2026, 09:10:58
class Solution {
public:
    int balancedStringSplit(string s) {

      int balance = 0;

      int count = 0;

      for(char ch : s){
        if(ch=='R'){
            balance++;
        }
        else{
            balance--;
        }

        if(balance==0){
            count++;
        }
      }

      return count++;
    }
};