class Solution {
public:

/* 
    0 0 0 
    0 1 0
    1 1 1 
    1 1 1 
*/
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       queue<pair<int,int>> q;
       int n = mat.size();
       int m = mat[0].size();
       vector<vector<int>> visited(n,vector<int>(m,0));
       vector<vector<int>> dist(n, vector<int>(m, -1));
       for(int i = 0 ; i < mat.size();i++)
       {
        for(int j = 0 ; j < mat[0].size() ;j++)
        {
            if(mat[i][j] == 0)
            {
                visited[i][j] = 1;
                q.push({i,j});
                dist[i][j] = 0;
            }

        }
       }
    vector<pair<int,int>> dir = {{1,0},{0,1},{0,-1},{-1,0}};
    while(!q.empty())
    {
        auto [x,y] = q.front();
        q.pop();
        for(auto [i,j] : dir)
        {
            int nx =  i + x;
            int ny = j + y;
            if(nx >=0 && nx < n && ny >=0 && ny < m && !visited[nx][ny])
            {
                dist[nx][ny] = dist[x][y]  + 1;
                q.push({nx,ny});
                visited[nx][ny] = 1;
            }
        } 
    }
    return dist;
    }
};