class Solution {
    // 3 6 1 4 1 2
    static bool compare(vector<int>& a, vector<int>& b)
{
    if (a[1] == b[1])
        return a[0] < b[0];   // same end -> smaller start first

    return a[1] > b[1];       
}
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        int mini = intervals[0][0];
        int maxi =intervals[0][1];
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] >= mini && intervals[i][1] <= maxi)  continue;
            else 
            {
                ans.push_back(intervals[i]);
                mini =  intervals[i][0];
                maxi = intervals[i][1];

            }
        }
        return ans.size();
    }
};