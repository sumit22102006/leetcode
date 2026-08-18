// Last updated: 18/08/2026, 14:41:14
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size();

        std::rotate(nums.begin(), nums.end() - k, nums.end());
    }
};