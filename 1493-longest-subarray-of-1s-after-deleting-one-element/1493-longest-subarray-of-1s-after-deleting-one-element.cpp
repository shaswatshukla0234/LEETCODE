class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i  = 0 ; 
        int j  =  0 ;
        int MAX =  0;
        int del =  0;
        int prev = -1;
        int count  = 0 ;
        while(j <  nums.size())
        {
            if(nums[j] == 1)  count++;
            else if(nums[j] == 0  && del )   
            {
                count =  j - prev-1;
                prev = j;
            }
            else 
            {
                del  = 1;
                prev = j ;
            }
            MAX = max(MAX , count);
            j++;
        }
        if(prev == -1) MAX= MAX -1;
        return MAX;
    }
};