class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = 0; int min = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] > max)
            {
                min = max;
                max = nums[i];
            }
            else if(nums[i] > min )
            {
                min = nums[i];
            }
        }
        return (min-1)*(max-1);
    }
};