class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size() == 0  )  return 1;
        int n  = nums.size();
        int MIN = 0;
        int MAX = 0;
       for(int i =  1 ; i < nums.size();i++)
       {
            if(nums[MIN] > nums[i] ) MIN =  i;
            if(nums[MAX] < nums[i]  ) MAX = i;
       }
       int temp = MIN;
       MIN  = min(MIN , MAX);
       MAX  = max(MAX,temp);
       int ans = MAX+1;
       if(ans > n - MIN)
       {
        ans = nums.size() - MIN;
       }
    return ans > n - (MAX - MIN ) +1 ? n - (MAX - MIN ) +1 : ans;
    }
};