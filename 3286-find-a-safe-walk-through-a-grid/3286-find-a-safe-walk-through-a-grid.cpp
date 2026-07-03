class Solution {
    /* in this code we make a logic we use double ended queeu teh new data structure here it is that mean we can insert ans delete from both side front and back  
    logic -> we calculate minimum cost from source to destination then chekc if min < health = false otherwise true;
    if we get 0 then pusht frmo front else we push from back 
    */
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> dist(n, vector<int>(m, 1e9));
    int dx[] = {-1,1,0,0};
    int dy[] = {0,0,-1,1};
    deque<pair<int,int>> dq;
    dist[0][0] = grid[0][0];
    dq.push_front({0,0});

    while(!dq.empty()) {
        auto [x,y] = dq.front();
        dq.pop_front();

        for(int i=0;i<4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx>=0 && nx<n && ny>=0 && ny<m) {

                int newCost = dist[x][y] + grid[nx][ny];

                if(newCost < dist[nx][ny]) {
                    dist[nx][ny] = newCost;

                    if(grid[nx][ny]==0)
                        dq.push_front({nx,ny});
                    else
                        dq.push_back({nx,ny});
                }
            }
        }
    }

    return dist[n-1][m-1] < health;
    }
};




