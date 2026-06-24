// Last updated: 24/06/2026, 08:37:54
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int ,int >mp;

        for(int ch : nums){
            mp[ch]++;
        }

        int duplicate = -1 ;
        int missing = -1 ;

         for(int i = 1; i <= nums.size(); i++) {

            if(mp[i] == 2) {
                duplicate = i;
            }

            if(mp[i] == 0) {
                missing = i;
            }
        }

        return {duplicate, missing};
    }
};