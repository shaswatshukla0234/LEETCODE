class Solution {
    bool update(int mid ,vector<int>& nums, int threshold )
    {
        long long int total = 0 ;
        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i] %mid > 0)    total += nums[i]/mid + 1;
            else 
                total += nums[i]/mid;
        }
        return total <= threshold;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = INT_MIN;
        int low =1;
        for(int i = 0 ; i < nums.size();i++)
        {
            high = max(nums[i],high);
        }
        int prev = -1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(update(mid,nums,threshold))
            {
                high = mid -1;
                prev = mid;
            }
            else 
                low = mid +1;
        }
        return prev;
    }
};