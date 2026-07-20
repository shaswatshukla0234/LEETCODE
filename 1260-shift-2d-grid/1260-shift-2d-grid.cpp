class Solution {
    // 1 2 3 4 /  5 6 6 
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> arr(n*m,0);
        k = k %(m * n);
        int t = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ;  j <  m ; j++)
            {
                arr[(t+k)%(n*m)] = grid[i][j];
                t++;
            }
        }
        t = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                grid[i][j] = arr[t++];
            }
        }
        return grid;
    }
};