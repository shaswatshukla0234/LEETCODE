class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi  = nums[0];
        for(auto num : nums)
        {
            maxi = max(num,maxi);
        }
        long long int sum = 0;
        for(int num : nums)
        {
            sum +=  maxi - num;
        }
        return sum ;
    }
};