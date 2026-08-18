// Last updated: 18/08/2026, 14:40:32
class Solution {
public:
    string toLowerCase(string s) {
        
for(char &c : s) {
    c = tolower(c);
}
return s ;
    }
};