// Last updated: 16/06/2026, 13:02:57
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;

        for(char ch : s) {
            freq[ch]++;
        }

        int maxVowel = 0;
        int maxConsonant = 0;

        string vowels = "aeiou";

        for(auto &it : freq) {
            char ch = it.first;
            int count = it.second;

            if(vowels.find(ch) != string::npos) {
                maxVowel = max(maxVowel, count);
            } else {
                maxConsonant = max(maxConsonant, count);
            }
        }

        return maxVowel + maxConsonant;
    }
};