class Solution {
public:
    struct cmp 
{
    bool operator()(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];   
    }
};
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp());
        int count = 1;
        int i = 1;
        int n = points.size();
        int maxi = points[0][1];
        while(i < n)
        {
            if(points[i][0] <=  maxi )   i++;
            else 
            {
                count++;
                maxi = points[i][1];
                i++;
            }
        }
        return count;
    }
};