class Solution {
public:
static const int MOD = 1e9 + 7;
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        int mid = 0 ;
        int right =  0;
        int total  = 0;
        for(int  i = 0 ; i < nums.size();i++)
        {
            if(nums[i] < a)
            {
                total = (total + right + mid) % MOD;
            }
            else if(nums[i] >= a && nums[i] <= b)   
            {
                total = (total + right) % MOD;
                mid++;
            }
            else 
                right++;
        }
        return total;
    }
};