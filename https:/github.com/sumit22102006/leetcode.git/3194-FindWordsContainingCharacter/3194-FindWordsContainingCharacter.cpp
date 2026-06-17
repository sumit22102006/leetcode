// Last updated: 17/06/2026, 09:10:46
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for (int i = 0; i < words.size(); i++) {
            for (char ch : words[i]) {
                if (ch == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }

        return ans;
    }
};