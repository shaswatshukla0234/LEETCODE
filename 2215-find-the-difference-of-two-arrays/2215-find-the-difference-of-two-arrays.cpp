class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        int i = 0; 
        while(i < nums1.size() || i < nums2.size())
        {
            if(i < nums1.size())
                mp1[nums1[i]] = 1;
            if(i < nums2.size())
                mp2[nums2[i]] = 1;
            i++;
        }
        i = 0 ;
        vector<vector<int>> ans(2);
        for(auto i  : mp1)
        {
            if(mp2[i.first] != 1 )    ans[0].push_back(i.first);
        }
        for(auto i  : mp2)
        {
            if(mp1[i.first] != 1 )    ans[1].push_back(i.first);
        }
        return ans;
        
    }
};