// Last updated: 23/06/2026, 08:22:45
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] + nums[i + n] * 10000;
        }

        int index = 2 * n - 1;

        for(int i = n - 1; i >= 0; i--) {
            int y = nums[i] / 10000;
            int x = nums[i] % 10000;

            nums[index--] = y;
            nums[index--] = x;
        }

        return nums;
    }
};