// Last updated: 27/06/2026, 06:39:46
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        map<int, int> mp;

       
        for (int num : nums) {
            mp[num]++;
        }

        vector<int> ans;

       
        for (int i = 1; i <= nums.size(); i++) {
            if (mp[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};