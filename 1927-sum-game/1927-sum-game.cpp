class Solution {
public:
    bool sumGame(string num) {
        int left_question = 0;
        int right_question = 0;
        int sum1 = 0;
        int sum2 = 0;
        int n = num.size();
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                left_question++;
            else
                sum1 += num[i] - '0';
        }
        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                right_question++;
            else
                sum2 += num[i] - '0';
        }
        if ((left_question + right_question) % 2 == 1)
            return true;

        return sum1 - sum2 != 9 * (right_question - left_question) / 2;
    }
};