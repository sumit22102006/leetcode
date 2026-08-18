// Last updated: 18/08/2026, 14:39:35
class Solution {
    int signFunc(int x) {
        if (x > 0) {
            return 1;
        }
        if (x < 0) {
            return -1;
        }
        return 0;
    }

public:
    int arraySign(vector<int>& nums) {

        int sign = 1;

        for (int ch : nums) {
            if (ch == 0) {
                return 0;
            }

            if (ch < 0) {
                sign = -sign;
            }
        }

        return sign;
    }
};