// Last updated: 16/07/2026, 20:55:39
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        unordered_map<int, int> mp;

        // Count frequency of even numbers
        for (int num : nums) {
            if (num % 2 == 0)
                mp[num]++;
        }

        if (mp.empty())
            return -1;

        int ans = -1;
        int maxFreq = 0;

        for (auto it : mp) {

            if (it.second > maxFreq) {
                maxFreq = it.second;
                ans = it.first;
            }
            else if (it.second == maxFreq && it.first < ans) {
                ans = it.first;
            }
        }

        return ans;
    }
};