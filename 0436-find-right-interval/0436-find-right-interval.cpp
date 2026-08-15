class Solution {
public:
struct compare
{
     bool operator()(vector<int> &a, vector<int>& b)
    {
    return a[0] < b[0];
    }
};
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> ans(n);
        unordered_map<int,int> mp;
        for(int i  = 0 ; i < intervals.size() ;i++)
        {
            mp[intervals[i][0]] = i;
        }
        sort(intervals.begin(),intervals.end(),compare());
        for(int i = 0  ; i < intervals.size(); i++)
        {
            int low = i;
            int high = n-1;
            int prev = -1;
            while(low <= high)
            {
                int mid = low + (high - low)/2;
                if(intervals[mid][0]  >= intervals[i][1])
                {
                    prev = mp[intervals[mid][0]];
                    high =  mid -1;
                }
                else if (intervals[mid][0] < intervals[i][1])   
                    low = mid + 1;
            }
                ans[mp[intervals[i][0]]] = prev;
        }
        return ans;
    }
};