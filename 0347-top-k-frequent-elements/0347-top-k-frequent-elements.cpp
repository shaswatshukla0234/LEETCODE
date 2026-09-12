#define MAX 100000
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> v;
        for(int i = 0; i < nums.size(); i++)
        {
            bool found = false;
            for(int j = 0; j < v.size(); j++)
            {
                if(v[j].second == nums[i])
                {
                    v[j].first++;
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                v.push_back({1, nums[i]});
            }
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        vector<int> ans;
        for(int i = 0; i < k; i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};