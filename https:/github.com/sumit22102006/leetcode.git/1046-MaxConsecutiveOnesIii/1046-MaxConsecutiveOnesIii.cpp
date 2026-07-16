// Last updated: 16/07/2026, 20:55:52
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        int Czero = 0;
        int Max_length = INT_MIN;

        while (high < nums.size()) {
            if (nums[high] == 0) ++Czero;

            while (Czero > k) {
                if (nums[low] == 0) --Czero;
                ++low;
            }

            Max_length = max(Max_length, high - low + 1);
            ++high;
        }

        return Max_length;
    }
};