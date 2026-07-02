class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i = 0 ; i < strs.size() ; i++)
        {
            string s = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(s);
        }
        for (auto pair : mp) {
        vector<string> temp;

        for (string s : pair.second) {
            temp.push_back(s);
        }
        ans.push_back(temp);
    }
        return ans;
    }
};







