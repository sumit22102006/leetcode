// Last updated: 26/08/2026, 21:48:18
class Solution {
public:
    bool digitCount(string num) {
        vector<int> freq(10, 0);

        // Count frequency of each digit
        for (char ch : num) {
            freq[ch - '0']++;
        }

        // Compare expected frequency with actual frequency
        for (int i = 0; i < num.size(); i++) {
            if (freq[i] != num[i] - '0') {
                return false;
            }
        }

        return true;
    }
};