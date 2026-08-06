class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> ans;
        int mini = INT_MAX;
        for(int i = 0 ; i < list1.size();i++)
        {
            for(int j = 0 ; j  < list2.size();j++)
            {
                if(list1[i] == list2[j])
                {
                    ans[list1[i]] = i + j;
                    mini = min(mini,i+j);
                }
            }
        }
        vector<string> anss;
        for(auto i : ans)
        {
            if(mini == i.second)
                anss.push_back(i.first);

        }
        return anss;
    }
};