// Last updated: 23/06/2026, 08:22:42
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;

        for(int ch :nums){
            v.push_back(ch);
        }
        for(int ch :nums){
            v.push_back(ch);
        }

        return v;
    }
};