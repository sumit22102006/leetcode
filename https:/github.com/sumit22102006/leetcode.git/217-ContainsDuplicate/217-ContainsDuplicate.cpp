// Last updated: 28/06/2026, 20:39:54
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1])
                return true;
        }

        return false;
    }
};