class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans = arr;
        sort(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        int num = 1;
        for(int i =0  ;i < arr.size();i++)
        {
            if (mp.count(arr[i]) == 0) 
            {
                mp[arr[i]] = num++;
            }
        }
        for(int i  = 0 ; i < ans.size();i++)
        {
            ans[i] =  mp[ans[i]];
        }
        return ans;
    }
};