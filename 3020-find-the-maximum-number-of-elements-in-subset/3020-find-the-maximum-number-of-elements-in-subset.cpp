class Solution {
public:
    int maximumLength(vector<int>& nums) {
        
        unordered_map<long long,int> freq;

        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        int maxi = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            // special handling for 1
            if(nums[i] == 1)
            {
                int cnt = freq[1];
                if(cnt % 2 == 0) cnt--;

                maxi = max(maxi,cnt);
                continue;
            }

            if(freq[nums[i]] < 2)
                continue;

            long long prev = nums[i];
            int ans = 0;

            while(freq[prev] >= 2)
            {
                
                ans += 2;
                if(prev > 1e9)
                    break;
                prev = prev * prev;
            }

            if(freq[prev] >= 1)
                ans += 1;
            else
                ans -= 1;

            maxi = max(ans,maxi);
        }

        return maxi;
    }
};