class Solution {

public:
static bool cmp(pair<string,int> &a, pair<string,int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;

    return a.second > b.second;
}
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<pair<string,int>> ans;
        unordered_map<string,int> mp;
        for(auto i : words)
            mp[i]++;
        for(auto i : mp)
        {
            ans.push_back({i.first,i.second});
        }
        sort(ans.begin(),ans.end(),cmp);
        vector<string> ans2;
        for(int i  = 0 ; i < ans.size() && i < k  ; i++)
        {
            ans2.push_back(ans[i].first);
        }
        return ans2;
    }
};