// Last updated: 17/06/2026, 09:11:36
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string subString = strs[0];

        for(int i =1; i<strs.size(); ++i){
            while(strs[i].find(subString)!=0){
                subString.pop_back();
            }
        }
        return subString;
    }
};