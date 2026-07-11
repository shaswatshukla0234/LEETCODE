class Solution {
public:
// the best mathematics logic will held here ------ ;
/* 
  best =  (hi + hj + dist) / 2;
  dist  = current rest  to prev rest --- ? 
  forward side not give me always the right asnwer thats why i use backward also to find the maximum reached . 
*/
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        restrictions.push_back({1,0});
        restrictions.push_back({n,n-1});
        sort(restrictions.begin(),restrictions.end());
        int ans  = 0 ;
        int m = restrictions.size();
        for (int i = 1; i < m; i++)
        {
            int distance = restrictions[i][0] - restrictions[i-1][0];
            restrictions[i][1] =min(restrictions[i][1],restrictions[i-1][1] + distance);
        }
        for(int i=m-2;i>=0;i--)
        {
            int distance = restrictions[i+1][0] - restrictions[i][0] ;
            restrictions[i][1]=min(restrictions[i][1], restrictions[i+1][1]+distance);
        }
        for(int i = 1 ; i < restrictions.size();i++)
        {
            int dist = abs(restrictions[i][0]  - restrictions[i-1][0]);
            int peak = (restrictions[i][1] + restrictions[i-1][1] + dist) / 2;
            ans = max(ans,peak);
        }
        return ans;
    }
};