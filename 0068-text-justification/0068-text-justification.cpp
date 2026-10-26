class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int n = words.size();
        int i = 0;

        while (i < n) {
            int lastIndex = i;
            int sum = 0;
            int k = 0;
            while (i < n && sum + words[i].size() + k <= maxWidth) {
                sum += words[i].size();
                k++;
                i++;
            }

            int gaps = k - 1;
            int totalSpaces = maxWidth - sum;
            string s = "";
            if (i == n || gaps == 0) {
                for (int j = lastIndex; j < i; j++) {
                    s += words[j];

                    if (j < i - 1) {
                        s += ' ';
                    }
                }

                s += string(maxWidth - s.size(), ' ');
            }
            else {
                int baseSpaces = totalSpaces / gaps;
                int extra = totalSpaces % gaps;

                for (int j = lastIndex; j < i; j++) {
                    s += words[j];

                    if (j < i - 1) {
                        int spaces = baseSpaces;

                        if (extra > 0) {
                            spaces++;
                            extra--;
                        }

                        s += string(spaces, ' ');
                    }
                }
            }
            ans.push_back(s);
        }

        return ans;
    }
};