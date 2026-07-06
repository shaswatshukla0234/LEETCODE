class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int range = 0;
        for(int i = 0  ; i < nums.size() ; i++)
        {
            int n = nums[i];
            int maxi = INT_MIN;
            int small  = INT_MAX;
            while(nums[i])
            {
                int rem = nums[i] %10;
                maxi = max(maxi , rem);
                small = min(small,rem);
                nums[i] /= 10;
            }            
            mp[maxi - small].push_back(n); 
            range = max(range,maxi - small);
        }
        long long int ans =  0;
        for(auto i : mp[range])
        {
            ans += i;
        }
        return ans;
    }
};