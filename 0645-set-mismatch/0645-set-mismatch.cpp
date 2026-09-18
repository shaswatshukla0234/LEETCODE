class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int doub = -1;
        int sum =  nums[0];
        int miss = -1;
        for(int i = 1 ; i < nums.size();i++)
        {
            if(nums[i] == nums[i-1])       doub = nums[i];  
            sum += nums[i];
        }
        sum -= doub;
        cout << sum ; 
        return {doub,(n*(n+1))/2 - sum };
    }
};