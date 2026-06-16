// Last updated: 16/06/2026, 13:03:23
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