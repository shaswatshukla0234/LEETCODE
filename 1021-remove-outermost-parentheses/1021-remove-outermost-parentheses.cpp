
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> sh;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (sh.size() != 0) {
                    ans += s[i];
                }
                sh.push(s[i]);
            }
            else {
                sh.pop();

                if (sh.size() != 0) {
                    ans += s[i];
                }
            }
        }

        return ans;
    }
};
