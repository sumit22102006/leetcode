// Last updated: 17/07/2026, 14:13:37
class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string>v;
        string word ;

        stringstream s1(s);

        while(s1>>word){
            v.push_back(word);
        }

         string s2 = "";

       
        for (int i = 0; i < k; i++) {
            s2 += v[i];

            if (i != k - 1) {
                s2 += " ";
            }
        }

        return s2;
    }
};