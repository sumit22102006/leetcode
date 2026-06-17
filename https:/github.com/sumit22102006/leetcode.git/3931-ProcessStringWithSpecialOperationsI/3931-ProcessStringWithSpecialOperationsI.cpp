// Last updated: 17/06/2026, 11:10:16
class Solution {
public:
    string processStr(string s) {
         string result = "";
        for(char ch : s){
            if(ch=='#'){
              result +=result; 
            }
          else  if(ch=='%'){
              reverse(result.begin() , result.end());  
            }

            else if(ch=='*'){
                if(!result.empty()){
                    result.pop_back();
                }

            }
            else{
              result = result+ch;
            }
        }

        return result ; 
    }
};