// Last updated: 16/06/2026, 13:03:53
class Solution {
public:
    bool isPalindrome(string s) {

        string word = "";

        for(char ch :s){
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
                if(ch>='A' && ch<='Z'){
                    ch = ch+32;
                }

                word += ch;
            }
        }

        int left = 0;
        int right = word.length()-1;

        while(right>left){
            if(word[left]!= word[right]){
                return false;
            }
            ++left;
            --right;
        }

     return true;
        

    }
  
};