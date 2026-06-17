// Last updated: 17/06/2026, 09:11:15
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int ,int>mp;

        for(int value: nums){
            mp[value]++;

            int freq =  nums.size()/2;

            for(auto& it  :mp){
                if(it.second>freq)
                return it.first;
            }
        }
        return -1;

        }
        
    
};