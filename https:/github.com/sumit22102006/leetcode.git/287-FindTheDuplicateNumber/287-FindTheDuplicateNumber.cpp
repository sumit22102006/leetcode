// Last updated: 17/07/2026, 14:14:03
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans ;
     map<int , int> mp;
     for(int ch :nums){
        mp[ch]++;
     }
       for(auto &it :mp){
        if(it.second>1)
        ans = it.first;
       }

       return ans;
    }
};