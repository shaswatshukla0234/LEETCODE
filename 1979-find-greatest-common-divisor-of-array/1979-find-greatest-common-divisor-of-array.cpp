class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans = 1;
        int maxi = nums[0];
        int mini = nums[0];
        for(int i  = 1 ;  i < nums.size(); i++)
        {
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);
        }
        for(int i = 2 ; i <= mini ; i++)
        {
            if(mini%i == 0 && maxi%i== 0)    ans = i;
        }
        return ans;
    }
};