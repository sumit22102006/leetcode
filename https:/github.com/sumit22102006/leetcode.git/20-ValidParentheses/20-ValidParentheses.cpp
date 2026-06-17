// Last updated: 17/06/2026, 09:11:34
class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(char ch : s) {

            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {

                if(st.empty()) {
                    return false;
                }

                if((ch == ')' && st.top() == '(') ||
                   (ch == '}' && st.top() == '{') ||
                   (ch == ']' && st.top() == '[')) {

                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};