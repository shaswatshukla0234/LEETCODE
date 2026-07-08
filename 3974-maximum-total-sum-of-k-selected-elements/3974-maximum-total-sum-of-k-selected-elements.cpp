class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long int ans = 0 ;
        sort(nums.begin(),nums.end());
        for(int i =  nums.size() - 1 ; i>= 0 && k > 0 ; i-- , k--)
        {
            if(mul <= 0)   
            {
                ans += nums[i];
                continue;
            }
            ans += (long long )mul*nums[i];
            mul--;
        }
        return ans;
    }
};