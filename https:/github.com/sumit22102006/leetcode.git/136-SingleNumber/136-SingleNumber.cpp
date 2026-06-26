// Last updated: 26/06/2026, 06:36:32
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result ;
        map<int , int>mp;
        for(int ch : nums){
            mp[ch]++;
        }

        for (auto it : mp) {

            if(it.second != 2){
                result = it.first ;
            }
    // cout << it.first << " -> " << it.second << endl;
}
        return result;
    }
};