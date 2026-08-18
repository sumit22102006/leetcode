// Last updated: 18/08/2026, 14:41:02
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int , int >mp;
         int n = nums.size()/3;
         vector<int>v;

         for(int ch : nums){
            mp[ch]++;
         }
         for(auto& ch :mp){
            if(ch.second > n){
                v.push_back(ch.first);
            }
         }
         return v;
    }
};