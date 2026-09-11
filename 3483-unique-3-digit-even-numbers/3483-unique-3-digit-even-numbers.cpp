class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int ans = 0;
        vector<int> freq(10, 0);
        for (int x : digits)
            freq[x]++;
        for (int i = 1; i <= 9; i++) {
            for (int j = 0; j <= 9; j++) {
                for (int k = 0; k <= 8; k += 2) {

                    if (freq[i] > 0) {
                        freq[i]--;

                        if (freq[j] > 0) {
                            freq[j]--;

                            if (freq[k] > 0)
                                ans++;

                            freq[j]++;
                        }

                        freq[i]++;
                    }
                }
            }
        }

        return ans;
    }
};