class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int  i = 0 ; 
        int  j = 0 ;
        int maxi = 0;
        while(j < nums.size())
        {
            freq[nums[j]]++;
            if(freq[nums[j]] > k)
            {
                maxi = max(maxi , j - i);
                while(freq[nums[j]] > k)
                {
                    freq[nums[i++]]--;
                }
            }
            else 
                maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};