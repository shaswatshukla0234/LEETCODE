class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> freq(51,0);
        for(int i  : nums)
        {
            ++freq[i];
        }
        int ans = -1;
        for(int i  =0 ;  i < nums.size(); i++)
        {
            if(k == nums.size() || (freq[nums[i]] == 1 && (k==1 || !i || i == nums.size()-1)))
                ans = max(nums[i],ans);
        }
        return ans;
    }
};