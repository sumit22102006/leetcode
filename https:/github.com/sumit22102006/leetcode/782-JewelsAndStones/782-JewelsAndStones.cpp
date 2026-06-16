// Last updated: 16/06/2026, 13:03:36
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char> st;

        for(char ch : jewels){
            st.insert(ch);
        }

        int count=0;

        for(char ch: stones){
            if(st.find(ch) !=st.end()){
                count++;
            }
        }
        return count;

    }
};