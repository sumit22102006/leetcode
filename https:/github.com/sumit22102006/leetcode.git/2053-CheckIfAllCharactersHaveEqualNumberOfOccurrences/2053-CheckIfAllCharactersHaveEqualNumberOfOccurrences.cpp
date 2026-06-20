// Last updated: 20/06/2026, 17:09:00
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> mp;

        for(char ch : s) {
            mp[ch]++;
        }

        int freq = mp.begin()->second;

        for(auto it : mp) {
            if(it.second != freq) {
                return false;
            }
        }

        return true;
    }
};