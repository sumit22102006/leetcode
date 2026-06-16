// Last updated: 16/06/2026, 13:03:57
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {
            
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            
            digits[i] = 0;
        }

        // If all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};