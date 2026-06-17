// Last updated: 17/06/2026, 09:11:01
class Solution {
public:
    string defangIPaddr(string address) {

       string str ="";
       for(int i = 0 ; i<address.size() ; i++){
        if(address[i]!='.'){
            str.push_back(address[i]);
        }
        else{
            str.append("[.]");
        }
       }
       return str;
    }
};