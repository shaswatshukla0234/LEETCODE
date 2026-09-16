class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, pair<int,int>> mp;
        int maxi = -1;
        int element = -1;
        unordered_map<int,int> freq;

        for(int i = 0; i < nums.size(); i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                mp[nums[i]].second = i;
            }
            else
                mp[nums[i]] = {i, i};

            freq[nums[i]]++;

            if(freq[nums[i]] > maxi)
            {
                maxi = freq[nums[i]];
                element = nums[i];
            }
            else if(freq[nums[i]] == maxi &&
                    (mp[element].second - mp[element].first) >
                    (mp[nums[i]].second - mp[nums[i]].first))
            {
                element = nums[i];
            }
        }
        return mp[element].second - mp[element].first + 1;
    }
};