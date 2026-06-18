// Last updated: 18/06/2026, 05:45:58
class Solution {
public:
    string simplifyPath(string path) {

        vector<string> st;
        string temp;

        stringstream ss(path);

        while (getline(ss, temp, '/')) {

            if (temp == "" || temp == ".") {
                continue;
            }

            else if (temp == "..") {

                if (!st.empty()) {
                    st.pop_back();
                }
            }

            else {
                st.push_back(temp);
            }
        }

        string ans = "";

        for (string folder : st) {
            ans += "/" + folder;
        }

        return ans.empty() ? "/" : ans;
    }
};