// Last updated: 16/06/2026, 13:03:17
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