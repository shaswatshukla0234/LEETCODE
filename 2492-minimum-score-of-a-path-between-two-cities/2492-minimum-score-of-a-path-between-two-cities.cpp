class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n+1);
    for(auto edge : roads)
{
    int src = edge[0];
    int dest = edge[1];
    int wt = edge[2];

    adj[src].push_back({dest, wt});
    adj[dest].push_back({src, wt}); 
}
vector<int> visited(n+1,0);
int mini = INT_MAX;
    queue<int> q;
    q.push(1);
    visited[1] = 0;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(auto i : adj[x])
            {
                mini = min(mini, i.second);

                if(!visited[i.first])
                {
                    visited[i.first] = 1;
                    q.push(i.first);
                }
            }
    }
return mini;
    }
};