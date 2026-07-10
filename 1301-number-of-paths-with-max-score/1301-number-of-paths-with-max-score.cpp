class Solution {
public:
    /* 
        E 2 3
        2 1 2
        1 2 S

        E 1 2
        1 X 1
        2 1 S

    */
    static const int MOD = 1e9 + 7;

    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n = board.size();

        vector<vector<int>> score(n, vector<int>(n, -1));
        vector<vector<int>> ways(n, vector<int>(n, 0));

        score[n - 1][n - 1] = 0;
        ways[n - 1][n - 1] = 1;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {

                if (board[i][j] == 'X') continue;
                if (i == n - 1 && j == n - 1) continue;

                int best = -1;
                int cnt = 0;

                // Down
                if (i + 1 < n && score[i + 1][j] != -1) {
                    if (score[i + 1][j] > best) {
                        best = score[i + 1][j];
                        cnt = ways[i + 1][j];
                    } else if (score[i + 1][j] == best) {
                        cnt = (cnt + ways[i + 1][j]) % MOD;
                    }
                }

                // Right
                if (j + 1 < n && score[i][j + 1] != -1) {
                    if (score[i][j + 1] > best) {
                        best = score[i][j + 1];
                        cnt = ways[i][j + 1];
                    } else if (score[i][j + 1] == best) {
                        cnt = (cnt + ways[i][j + 1]) % MOD;
                    }
                }

                // Diagonal
                if (i + 1 < n && j + 1 < n && score[i + 1][j + 1] != -1) {
                    if (score[i + 1][j + 1] > best) {
                        best = score[i + 1][j + 1];
                        cnt = ways[i + 1][j + 1];
                    } else if (score[i + 1][j + 1] == best) {
                        cnt = (cnt + ways[i + 1][j + 1]) % MOD;
                    }
                }

                if (best == -1) continue;

                int val = 0;
                if (board[i][j] != 'S' && board[i][j] != 'E')
                    val = board[i][j] - '0';

                score[i][j] = best + val;
                ways[i][j] = cnt;
            }
        }

        if (ways[0][0] == 0)
            return {0, 0};

        return {score[0][0], ways[0][0]};
    }
};