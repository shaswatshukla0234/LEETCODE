class Solution {
public:
    bool update(string word, vector<vector<char>>& board, int i, int j,
                int target, int point, vector<vector<int>>& visited)
    {
        if(point == target)
            return true;
        visited[i][j] = 1;
        int n = board.size();
        int m = board[0].size();

        int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for(int k = 0; k < 4; k++)
        {
            int row = i + dir[k][0];
            int col = j + dir[k][1];

            if(row >= 0 && row < n && col >= 0 && col < m &&
               !visited[row][col] &&
               word[point] == board[row][col])
            {
                if(update(word, board, row, col, target, point + 1, visited))
                    return true;
            }
        }

        visited[i][j] = 0;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word)
    {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(word[0] == board[i][j])
                {
                    if(update(word, board, i, j, word.size(), 1, visited))
                        return true;
                }
            }
        }

        return false;
    }
};